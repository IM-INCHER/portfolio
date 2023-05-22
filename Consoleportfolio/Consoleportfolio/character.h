#pragma once
#include "pokemon.h"

class character
{
private:
	

public:
	character();
	~character();

	vector<tagMonster> m_vMyMonster;
	vector<tagMonster>::iterator m_viMyMonster;

	vector<tagItemInfo> m_vInventory;
	vector<tagItemInfo>::iterator m_viInventory;

	int m_money;

	void showMyMonster();
	void showPokemonInfo();
	void showMyBag();
	void addMonster(tagMonster monster);
	void addItem(tagItemInfo item);
	void sellItem();
	void useItem();
	void allHeal();
	void lvUp(tagMonster &monster);


	vector<tagMonster> getMonster() { return m_vMyMonster; }
	vector<tagMonster>::iterator getiMonster() { return m_viMyMonster; }
	void setiMonster(vector<tagMonster> begin) { m_viMyMonster = begin.begin(); }

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
	void textclear();

	void renderUI();
};

