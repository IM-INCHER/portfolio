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
	//����ۿ��� �ѷ��ش�
	PatBlt( getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS );
	//===========================================================
	
	_mario->render();

	//===========================================================
	//����ۿ� �ִ� ������ hdc �� �׸���
	this->getbackBuffer()->render( getHDC(), 0, 0 );
}

