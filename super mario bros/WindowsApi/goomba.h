#pragma once

#include "marioWorld.h"

class mario;

class goomba:public marioWorld
{
private:
	image * _goomba;
	RECT _rcGoomba;
	RECT Temp;

	mario * _mario;

	float _speed;

	int count;
	int index;

	bool _isDie;

public:
	goomba();
	~goomba();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	inline RECT getGoombaRc() { return _rcGoomba; }
	inline void setDie(bool set) { _isDie = set; }

	void setMarioMemoryLink(mario* _mario) { this->_mario = _mario; }

	void collision();
};

