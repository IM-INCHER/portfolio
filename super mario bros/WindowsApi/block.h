#pragma once

#include "marioWorld.h"

class block:public marioWorld
{
private:


public:
	block();
	~block();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();
};

