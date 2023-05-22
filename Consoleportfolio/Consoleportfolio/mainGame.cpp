#include "mainGame.h"



mainGame::mainGame()
{
	m_map = new map;

	playerX = 40;
	playerY = 8;

	isGameStart = false;
}


mainGame::~mainGame()
{

}

void mainGame::update()
{
	while (true)
	{
		int num;
		num = m_map->startSecen();

		if (num == 0)
		{
			isGameStart = true;
			break;
		}
		else if (num == 1)
		{
			m_map->gotoxy(30, 20);
			cout << "아직 미구현된 기능입니다." ;
			Sleep(1000);
			system("cls");
		}
		else
		{
			break;
		}
	}
	if (isGameStart) m_map->pokemonSelect();

	//m_map->battle();

	while (isGameStart)
	{
		setLocation(m_map->village(playerX, playerY));
	}
}

void mainGame::release()
{
	delete m_map;
}

void mainGame::setLocation(VILLAGEMAP village)
{
	switch (village)
	{
	case VILLAGE_HOUSE:
		m_map->house();
		break;
	case VILLAGE_LABORATORY:
		m_map->laboratory();
		break;
	case VILLAGE_SHOP:
		m_map->store();
		break;
	case VILLAGE_POKECENTER:
		m_map->pokecenter();
		break;
	case VILLAGE_OUT:
		m_map->forest();
		break;
	}
}
