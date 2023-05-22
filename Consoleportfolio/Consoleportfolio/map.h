#pragma once
#include "battle.h"

enum VILLAGEMAP
{
	VILLAGE_HOUSE,
	VILLAGE_LABORATORY,
	VILLAGE_SHOP,
	VILLAGE_POKECENTER,
	VILLAGE_OUT
};

enum MENU
{
	MENU_BAG,
	MENU_POKEMON,
	MENU_PROFILE,
	MENU_CANCEL,
	MENU_END
};

class map
{
private:
	character* m_player;
	pokemon* m_pokemon;
	battle* m_battle;
	shop* m_shop;
	pokemonRender* pRender;

public:
	map();
	~map();

	int startSecen();
	void pokemonSelect();
	VILLAGEMAP village(int &playerX, int &playerY);
	MENU menu();
	void locationMenu(MENU menu);
	int house();
	int laboratory();
	int pokecenter();
	int store();
	int forest();
	void renderPlayer(int playerX, int playerY);
	void renderUI();

	int battle();

	void release();

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
	void textclear();

	void test();
	
};

