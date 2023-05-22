#include "stdafx.h"
#include "gameStudy.h"


gameStudy::gameStudy()
{
}


gameStudy::~gameStudy()
{
}

HRESULT gameStudy::init()
{
	gameNode::init(true);

	_mario = new mario;
	_mario->init();

	return S_OK;
}

void gameStudy::release()
{
	_mario->release();
	SAFE_DELETE(_mario);

	gameNode::release();
}

void gameStudy::update()
{
	_mario->update();

	gameNode::update();
}

void gameStudy::render()
{
	//백버퍼에서 뿌려준다
	PatBlt( getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS );
	//===========================================================
	
	_mario->render();

	//===========================================================
	//백버퍼에 있는 내용을 hdc 에 그린다
	this->getbackBuffer()->render( getHDC(), 0, 0 );
}

