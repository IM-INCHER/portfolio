#pragma once

#define GROUND 492

#include "gameNode.h"

class marioWorld:public gameNode
{
private:
	image * _stage1_1;

	RECT _ground[4];
	RECT _pipe[6];

	int _x, _y;

public:
	marioWorld();
	~marioWorld();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	inline int getMapX() { return _x; }
	inline int getMapY() { return _y; }
	inline void setMapX(int x) { _x = x; }
	inline RECT getGround(int Num) {return _ground[Num];}
	inline RECT getPipe(int Num) { return _pipe[Num]; }
};

