#pragma once

#include "gameNode.h"
#include "bullets.h"
#include "progressBar.h"

//���漱��
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

	//ship ���� �浹 �Լ�
	void collision();

	//�̻��� ���� �������� �Լ�
	missile* getMissile() { return _missile; }
	frameMissile* getFrameMissile() { return _frameMissile; }

	//���ּ� ���� �������� �Լ�
	float getShipX() { return _ship->getX() + _ship->getFrameWidth() / 2; }
	float getShipY() { return _ship->getY() + _ship->getFrameHeight() / 2; }
	RECT getShipRc() { return _ship->boundingBox(); }

	//�� ����ִ� �Լ�
	void hitDamage( float damage ) { _currentHP -= damage; }


	//���漱�� ������ �� ���ʹ̸Ŵ����� �ּҸ� �޾ƿͼ� �����Ϳ� ������ ��ũ��������
	void setEnemyManagerMemoryLink( enemyManager * em ) { _em = em; }
};

