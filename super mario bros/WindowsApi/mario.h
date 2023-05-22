#pragma once

#include "marioWorld.h"
#include "pipe.h"

class goomba;

enum MODE
{
	MODE_MINI,
	MODE_BIG,
	MODE_FLOWER
};

enum STATE
{
	STATE_STAND,
	STATE_MOVE,
	STATE_SIT,
	STATE_JUMP,
	STATE_AIR,
	STATE_WTAER,
	STATE_GOAL,
	STATE_DIE
};

class mario : public marioWorld
{
private:
	image * _mini_mario;
	image * _big_mario;
	RECT _rcMario;

	RECT temp;

	marioWorld * _mw;
	goomba * _goomba;

	float _speed;
	float _jump;
	float _Mx, _My, _BMy;
	float _gravity;
	float _gravityStrength;

	int _life;
	int _coin;
	int _fast;
	int _run;
	int _map;
	int _GNum;
	int _PNum;

	int count;
	int index;

	bool _isRight;

	MODE _NOW_MODE;
	STATE _NOW_STATE;

public:
	mario();
	~mario();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	inline RECT getMairoRc() { return _rcMario; }
	inline void setState(STATE state) { _NOW_STATE = state; }
	inline void setMG(float Num) { _gravity = Num; }

	void GNumCheck();
	void PNumCheck();
	void drop();
	void jump();

	void collisionPipe();
	void collisionGoomba();

	goomba * getGoomba() { return _goomba; }
};

