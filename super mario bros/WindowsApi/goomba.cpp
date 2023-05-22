#include "stdafx.h"
#include "goomba.h"
#include "mario.h"


goomba::goomba()
{
}


goomba::~goomba()
{
}

HRESULT goomba::init()
{
	_goomba = IMAGEMANAGER->addFrameImage("goomba", "image/goomba.bmp", 118, 37, 3, 1, true, RGB(255, 0, 255));
	_goomba->setX(1000);
	_goomba->setY(GROUND - _goomba->getFrameHeight());
	_goomba->setFrameX(0);
	_goomba->setFrameY(0);

	_speed = 2.f;

	count = 0;
	index = 0;

	_isDie = false;

	return S_OK;
}

void goomba::release()
{
}

void goomba::update()
{
	if (!(_isDie))
	{
		_goomba->setX(_goomba->getX() - _speed);

		_rcGoomba = RectMake(_goomba->getX(), _goomba->getY(), _goomba->getFrameWidth(), _goomba->getFrameHeight());

		count++;
		if (count % 10 == 0)
		{
			index++;
			if (index > 1)
			{
				index = 0;
			}
			_goomba->setFrameX(index);

			count = 0;
		}
	}
	if (_isDie)
	{
		count++;

		_goomba->setFrameX(2);

		if (count == 30)
		{
			_goomba->setX(2000);
			_goomba->setY(1000);
		}
	}
	
	collision();
}

void goomba::render()
{
	//Rectangle(getMemDC(), _rcGoomba.left, _rcGoomba.top, _rcGoomba.right, _rcGoomba.bottom);

	IMAGEMANAGER->frameRender("goomba", getMemDC(), _goomba->getX(), _goomba->getY());
}

void goomba::collision()
{
	if (!(_isDie))
	{
		if (IntersectRect(&Temp, &_rcGoomba, &_mario->getMairoRc()))
		{
			if (!((Temp.bottom - Temp.top) < (Temp.right - Temp.left)))
			{
				_mario->setMG(0.f);
				_mario->setState(STATE_DIE);
			}
		}
	}
}
