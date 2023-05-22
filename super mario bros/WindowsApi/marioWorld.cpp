#include "stdafx.h"
#include "marioWorld.h"


marioWorld::marioWorld()
{
}


marioWorld::~marioWorld()
{
}

HRESULT marioWorld::init()
{
	_stage1_1 = IMAGEMANAGER->addImage("1_1", "image/1-1_background.bmp", 8309, 550, false, false);

	_x = 0;
	_y = 0;

	return S_OK;
}

void marioWorld::release()
{
}

void marioWorld::update()
{
	_ground[0] = RectMake((0 - _x), GROUND, 2708, 58);
	_ground[1] = RectMake((2790 - _x), GROUND, 583, 58);
	_ground[2] = RectMake((3500 - _x), GROUND, 2510, 58);
	_ground[3] = RectMake((6095 - _x), GROUND, 2510, 58);

	_pipe[0] = RectMake((1106 - _x), (GROUND - 78), 68, 78);
	_pipe[1] = RectMake((1498 - _x), (GROUND - 118), 68, 118);
	_pipe[2] = RectMake((1812 - _x), (GROUND - 156), 68, 156);
	_pipe[3] = RectMake((2244 - _x), (GROUND - 156), 68, 156);
	_pipe[4] = RectMake((6408 - _x), (GROUND - 78), 68, 78);
	_pipe[5] = RectMake((7036 - _x), (GROUND - 78), 68, 78);
}

void marioWorld::render()
{
	IMAGEMANAGER->render("1_1", getMemDC(), 0, 0, _x, _y, WINSIZEX, WINSIZEY);

	//Rectangle(getMemDC(), _pipe[0].left, _pipe[0].top, _pipe[0].right, _pipe[0].bottom);
	//Rectangle(getMemDC(), _pipe[1].left, _pipe[1].top, _pipe[1].right, _pipe[1].bottom);
	//Rectangle(getMemDC(), _pipe[2].left, _pipe[2].top, _pipe[2].right, _pipe[2].bottom);
	//Rectangle(getMemDC(), _pipe[3].left, _pipe[3].top, _pipe[3].right, _pipe[3].bottom);
	//Rectangle(getMemDC(), _pipe[4].left, _pipe[4].top, _pipe[4].right, _pipe[4].bottom);
	//Rectangle(getMemDC(), _pipe[5].left, _pipe[5].top, _pipe[5].right, _pipe[5].bottom);

	//Rectangle(getMemDC(), _ground[0].left, _ground[0].top, _ground[0].right, _ground[0].bottom);
	//Rectangle(getMemDC(), _ground[1].left, _ground[1].top, _ground[1].right, _ground[1].bottom);
	//Rectangle(getMemDC(), _ground[2].left, _ground[2].top, _ground[2].right, _ground[2].bottom);
	//Rectangle(getMemDC(), _ground[3].left, _ground[3].top, _ground[3].right, _ground[3].bottom);
}
