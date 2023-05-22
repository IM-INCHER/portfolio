#pragma once
#include "map.h"

class mainGame
{
private:
	map* m_map;

	int playerX;
	int playerY;

	bool isGameStart;
public:
	mainGame();
	~mainGame();

	void update();
	void release();

	void setLocation(VILLAGEMAP village);
};

