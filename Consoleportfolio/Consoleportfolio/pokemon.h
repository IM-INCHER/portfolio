#pragma once
#include"shop.h"

enum TYPE
{
	TYPE_EMPTY,
	TYPE_NORMAL,
	TYPE_WATER,
	TYPE_FIRE,
	TYPE_GLASS
};

struct tagSkill
{
	string name;
	float power;
	int downAtk;
	int downdef;
	int downdex;
	int maxuse;
	int use;
	TYPE type;
};

struct tagMonster
{
	int number;
	string name;
	int lv;
	int maxHp;
	int hp;
	int atk;
	int def;
	int dex;
	TYPE type;
	tagSkill skill1;
	tagSkill skill2;
	tagSkill skill3;
	tagSkill skill4;
	tagItemInfo haveitem;
};

class pokemon
{
private:
	vector<tagMonster> m_vAllMonster;
	vector<tagMonster>::iterator m_viAllMonster;


public:
	pokemon();
	~pokemon();

	void monsterSetting();
	tagMonster rendommonster();
	tagMonster getPokemon(int num);

	/*vector<tagMonster> getPokemon() { return m_vAllMonster; }
	vector<tagMonster>::iterator getiPokemon() { return m_viAllMonster; }*/
};

