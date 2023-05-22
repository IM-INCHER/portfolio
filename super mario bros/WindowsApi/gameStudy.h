#pragma once

#include "gameNode.h"
#include "mario.h"

class gameStudy : public gameNode
{
private:
	mario * _mario;

public:
	gameStudy();
	virtual ~gameStudy();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

};