#include "stdafx.h"
#include "mario.h"
#include "goomba.h"

mario::mario()
{
}


mario::~mario()
{
}

HRESULT mario::init()
{
	_mw = new marioWorld;
	_mw->init();

	_goomba = new goomba;
	_goomba->init();

	_goomba->setMarioMemoryLink(this);

	_mini_mario = IMAGEMANAGER->addFrameImage("mini_mario", "image/mini_mario.bmp", 280, 80, 7, 2, true, RGB(255, 0, 255));
	_big_mario = IMAGEMANAGER->addFrameImage("big_mario", "image/big_mario.bmp", 280, 160, 7, 2, true, RGB(255, 0, 255));

	_Mx = 100;
	_My = GROUND - _mini_mario->getFrameHeight();

	_mini_mario->setFrameX(0);
	_mini_mario->setFrameY(0);
	_mini_mario->setX(_Mx);
	_mini_mario->setY(_My);

	_big_mario->setFrameX(0);
	_big_mario->setFrameY(0);
	_big_mario->setX(_Mx);
	_big_mario->setY(_My);

	_rcMario = RectMake(_Mx, _My, _mini_mario->getFrameWidth(), _mini_mario->getFrameHeight());

	_NOW_MODE = MODE_MINI;
	_NOW_STATE = STATE_STAND;

	_speed = 2.3f;
	_jump = 5.5f;
	_gravity = 0.f;
	_gravityStrength = 0.08f;

	_run = 0;
	_fast = 10;

	count = 0;
	index = 0;
	_GNum;

	_isRight = true;

	return S_OK;
}

void mario::release()
{
	_mw->release();
	SAFE_DELETE(_mw);

	_goomba->release();
	SAFE_DELETE(_goomba);
}

void mario::update()
{
	_mw->update();
	_goomba->update();

	_mini_mario->setX(_Mx);
	_mini_mario->setY(_My);

	if (_NOW_STATE != STATE_DIE)
	{
		_big_mario->setX(_Mx);
		_big_mario->setY(_My - 40);

		if (_NOW_MODE == MODE_MINI)
		{
			_rcMario = RectMake(_Mx, _My, _mini_mario->getFrameWidth(), _mini_mario->getFrameHeight());
		}
		if ((_NOW_MODE == MODE_BIG) || (_NOW_MODE == MODE_FLOWER))
		{
			_rcMario = RectMake(_Mx, _My - 40, _big_mario->getFrameWidth(), _big_mario->getFrameHeight());
		}

		if (KEYMANAGER->isStayKeyDown(VK_LEFT))
		{
			_isRight = false;

			if (!(_rcMario.left <= 0))
				_Mx -= _speed;

			if (_NOW_STATE != STATE_JUMP && _NOW_STATE != STATE_AIR)
			{
				_NOW_STATE = STATE_MOVE;
			}
		}
		else if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
		{
			_isRight = true;
		
			if (!(_rcMario.right > (CENTERX - 100)))
				_Mx += _speed;

			if ((_rcMario.right > (CENTERX - 100)))
			{
				_map = _mw->getMapX();

				_mw->setMapX(_map += _speed);
			}

			if (_NOW_STATE != STATE_JUMP && _NOW_STATE != STATE_AIR )
			{
				_NOW_STATE = STATE_MOVE;
			}
		}

		if (KEYMANAGER->isOnceKeyUp(VK_LEFT))
		{
			if (!(_NOW_STATE == STATE_JUMP))
				_NOW_STATE = STATE_STAND;
		}


		if (KEYMANAGER->isOnceKeyUp(VK_RIGHT))
		{
			if (!(_NOW_STATE == STATE_JUMP))
				_NOW_STATE = STATE_STAND;
		}

		if (KEYMANAGER->isStayKeyDown('X'))
		{
			_speed = 4.6;
			_fast = 5;
		}

		if (KEYMANAGER->isOnceKeyUp('X'))
		{
			_speed = 2.3f;
			_fast = 10;
		}

		if (KEYMANAGER->isOnceKeyDown('Z'))
		{
			_NOW_STATE = STATE_JUMP;
		}
		if (KEYMANAGER->isOnceKeyUp('Z'))
		{
			_gravityStrength = 0.16f;
		}
		if (KEYMANAGER->isOnceKeyUp('Q'))
		{
			_NOW_MODE = MODE_BIG;
		}

		if (_isRight)
		{
			_mini_mario->setFrameY(0);
			_big_mario->setFrameY(0);

			if (_NOW_STATE == STATE_STAND)
			{
				_mini_mario->setFrameX(0);
				_big_mario->setFrameX(0);
			}

			if (_NOW_STATE == STATE_MOVE)
			{
				count++;

				if (count % _fast == 0)
				{
					index++;
					if (index > 3)
					{
						index = 1;
					}
					_mini_mario->setFrameX(index);
					_big_mario->setFrameX(index);

					count = 0;
				}
			}

			if (_NOW_STATE == STATE_JUMP)
			{
				jump();

				_mini_mario->setFrameX(5);
				_big_mario->setFrameX(5);
			}
		}
		else
		{
			_mini_mario->setFrameY(1);
			_big_mario->setFrameY(1);

			if (_NOW_STATE == STATE_STAND)
			{
				_mini_mario->setFrameX(6);
				_big_mario->setFrameX(6);
			}

			if (_NOW_STATE == STATE_MOVE)
			{
				count++;

				if (count % _fast == 0)
				{
					index--;
					if (index < 3)
					{
						index = 5;
					}
					_mini_mario->setFrameX(index);
					_big_mario->setFrameX(index);

					count = 0;
				}
			}

			if (_NOW_STATE == STATE_JUMP)
			{
				jump();

				_mini_mario->setFrameX(1);
				_big_mario->setFrameX(1);
			}
		}
		if (_NOW_STATE == STATE_AIR)
		{
			_gravityStrength = 0.2f;

			_gravity += _gravityStrength;

			_My += _gravity;
		}


		drop();

		collisionPipe();
	}

	if (_NOW_STATE == STATE_DIE)
	{
		_mini_mario->setFrameY(0);
		_mini_mario->setFrameX(6);

		_gravity += 0.1f;

		_My -= _jump - _gravity;
	}
}

void mario::render()
{
	_mw->render();
	_goomba->render();

	if (_NOW_MODE == MODE_MINI)
		IMAGEMANAGER->frameRender("mini_mario", getMemDC(), _mini_mario->getX(), _mini_mario->getY());

	if (_NOW_MODE == MODE_BIG)
		IMAGEMANAGER->frameRender("big_mario", getMemDC(), _big_mario->getX(), _big_mario->getY());

	//Rectangle(getMemDC(), _rcMario.left, _rcMario.top, _rcMario.right, _rcMario.bottom);
}

void mario::GNumCheck()
{
	if (((_rcMario.right > _mw->getGround(0).left) && (_rcMario.right < _mw->getGround(0).right))
		|| ((_rcMario.left > _mw->getGround(0).left) && (_rcMario.left < _mw->getGround(0).right)))
	{
		_GNum = 0;
	}
	if (((_rcMario.right > _mw->getGround(1).left) && (_rcMario.right < _mw->getGround(1).right))
		|| ((_rcMario.left > _mw->getGround(1).left) && (_rcMario.left < _mw->getGround(1).right)))
	{
		_GNum = 1;
	}
	if (((_rcMario.right > _mw->getGround(2).left) && (_rcMario.right < _mw->getGround(2).right))
		|| ((_rcMario.left > _mw->getGround(2).left) && (_rcMario.left < _mw->getGround(2).right)))
	{
		_GNum = 2;
	}
	if (((_rcMario.right > _mw->getGround(3).left) && (_rcMario.right < _mw->getGround(3).right))
		|| ((_rcMario.left > _mw->getGround(3).left) && (_rcMario.left < _mw->getGround(3).right)))
	{
		_GNum = 3;
	}
}

void mario::PNumCheck()
{
	int Num = _mw->getMapX();

	if (Num < 1150)
	{
		_PNum = 0;
	}
	else if (Num > 1150 && Num < 1550)
	{
		_PNum = 1;
	}
	else if (Num > 1550 && Num < 2000)
	{
		_PNum = 2;
	}
	else if (Num > 2000 && Num < 2300)
	{
		_PNum = 3;
	}
	else if (Num > 2300 && Num < 6500)
	{
		_PNum = 4;
	}
	else if (Num > 6500 && Num < 7100)
	{
		_PNum = 5;
	}
}

void mario::drop()
{
	GNumCheck();

	if (IntersectRect(&temp, &_rcMario, &_mw->getGround(_GNum)))
	{
		if (_NOW_STATE == STATE_JUMP || _NOW_STATE == STATE_AIR)
		{
			_NOW_STATE = STATE_STAND;

			_gravity = 0;

			_My = _mw->getGround(_GNum).top - _mini_mario->getFrameHeight();

			_gravityStrength = 0.08f;
		}
	}

	if (IntersectRect(&temp, &_rcMario, &_mw->getGround(_GNum)))
	{
		if (_rcMario.bottom > (_mw->getGround(_GNum).top + 10))
		{
			_rcMario.right = _mw->getGround(_GNum).left;

			_rcMario.left = _rcMario.right - _mini_mario->getFrameWidth();
		}
	}
	else if ((_mw->getGround(_GNum).left > _rcMario.right) || (_mw->getGround(_GNum).right < _rcMario.left) && _NOW_STATE != STATE_JUMP)
	{
		_NOW_STATE = STATE_AIR;
	}
}

void mario::jump()
{
	_gravity += _gravityStrength;

	_My -= _jump - _gravity;
}

void mario::collisionPipe()
{
	for (int i = 0; i < 6; i++)
	{
		if (_NOW_STATE == STATE_JUMP)
		{
			if (IntersectRect(&temp, &_rcMario, &_mw->getPipe(i)))
			{
				if ((temp.bottom - temp.top) < (temp.right - temp.left))
				{
					_NOW_STATE = STATE_STAND;
					_gravity = 0;
					_My = _mw->getPipe(i).top - _mini_mario->getFrameHeight();
					_gravityStrength = 0.08f;
				}
			}
		}

		if (IntersectRect(&temp, &_rcMario, &_mw->getPipe(i)))
		{
			if ((temp.bottom - temp.top) > (temp.right - temp.left) && (_mw->getPipe(i).left == temp.left))
			{
				_Mx = _mw->getPipe(i).left - _mini_mario->getFrameWidth();
			}
			if ((temp.bottom - temp.top) > (temp.right - temp.left) && (_mw->getPipe(i).right == temp.right))
			{
				_Mx = _mw->getPipe(i).right;
			}
		}
	}
	PNumCheck();

	if (abs(_mw->getPipe(_PNum).top - _rcMario.bottom) < 5 && _NOW_STATE != STATE_JUMP && _rcMario.right < _mw->getPipe(_PNum).left)
	{
		_NOW_STATE = STATE_AIR;
	}

	if (abs(_mw->getPipe(_PNum).top - _rcMario.bottom) < 5 && _NOW_STATE != STATE_JUMP && _rcMario.left > _mw->getPipe(_PNum).right)
	{
		_NOW_STATE = STATE_AIR;
	}
}

void mario::collisionGoomba()
{
	
}

