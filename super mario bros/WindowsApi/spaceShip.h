#pragma once

#include "gameNode.h"
#include "bullets.h"
#include "progressBar.h"

//전방선언
class enemyManager;

class spaceShip : public gameNode
{
private:
	image * _ship;
	missile * _missile;
	frameMissile *_frameMissile;

	float _maxHP; 
	float _currentHP;

	progressBar *_hpBar;

	enemyManager *_em;

public:
	spaceShip();
	~spaceShip();

	HRESULT init();
	void release();
	void update();
	void render();

	void removeMissile( int arrNum );
	void removeFrameMissile( int arrNum );

	//ship 만의 충돌 함수
	void collision();

	//미사일 정보 가져오는 함수
	missile* getMissile() { return _missile; }
	frameMissile* getFrameMissile() { return _frameMissile; }

	//우주선 정보 가져오는 함수
	float getShipX() { return _ship->getX() + _ship->getFrameWidth() / 2; }
	float getShipY() { return _ship->getY() + _ship->getFrameHeight() / 2; }
	RECT getShipRc() { return _ship->boundingBox(); }

	//피 깎아주는 함수
	void hitDamage( float damage ) { _currentHP -= damage; }


	//전방선언 해줬을 때 에너미매니져의 주소를 받아와서 포인터에 정보를 링크시켜주자
	void setEnemyManagerMemoryLink( enemyManager * em ) { _em = em; }
};

