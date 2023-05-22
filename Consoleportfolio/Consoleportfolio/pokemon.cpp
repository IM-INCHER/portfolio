#include "pokemon.h"



pokemon::pokemon()
{
}


pokemon::~pokemon()
{
}

void pokemon::monsterSetting()
{
	tagItemInfo iempty;
	iempty.itemKind = ITEM_EMPTY;
	iempty.name = "-";
	iempty.description = "-";
	iempty.atk = 0;
	iempty.def = 0;
	iempty.dex = 0;
	iempty.price = 0;

	tagSkill empty;
	empty.name = "-";
	empty.power = 0;
	empty.downAtk = 0;
	empty.downdef = 0;
	empty.downdex = 0;
	empty.maxuse = 0;
	empty.use = 0;
	empty.type = TYPE_EMPTY;

	tagSkill tackle;
	tackle.name = "몸통박치기";
	tackle.power = 1;
	tackle.downAtk = 0;
	tackle.downdef = 0;
	tackle.downdex = 0;
	tackle.maxuse = 35;
	tackle.use = 35;
	tackle.type = TYPE_NORMAL;

	tagSkill scratch;
	scratch.name = "할퀴기";
	scratch.power = 1;
	scratch.downAtk = 0;
	scratch.downdef = 0;
	scratch.downdex = 0;
	scratch.maxuse = 35;
	scratch.use = 35;
	scratch.type = TYPE_NORMAL;

	tagSkill leer;
	leer.name = "째려보기";
	leer.power = 0;
	leer.downAtk = 0;
	leer.downdef = 3;
	leer.downdex = 0;
	leer.maxuse = 20;
	leer.use = 20;
	leer.type = TYPE_NORMAL;

	tagSkill tailwhile;
	tailwhile.name = "꼬리흔들기";
	tailwhile.power = 0;
	tailwhile.downAtk = 0;
	tailwhile.downdef = 0;
	tailwhile.downdex = 3;
	tailwhile.maxuse = 20;
	tailwhile.use = 20;
	tailwhile.type = TYPE_NORMAL;

	tagSkill growl;
	growl.name = "울부짖기";
	growl.power = 0;
	growl.downAtk = 3;
	growl.downdef = 0;
	growl.downdex = 0;
	growl.maxuse = 20;
	growl.use = 20;
	growl.type = TYPE_NORMAL;

	tagSkill enber;
	enber.name = "불꽃세레";
	enber.power = 1.4;
	enber.downAtk = 0;
	enber.downdef = 0;
	enber.downdex = 0;
	enber.maxuse = 25;
	enber.use = 25;
	enber.type = TYPE_FIRE;

	tagSkill watergun;
	watergun.name = "물대포";
	watergun.power = 1.4;
	watergun.downAtk = 0;
	watergun.downdef = 0;
	watergun.downdex = 0;
	watergun.maxuse = 25;
	watergun.use = 25;
	watergun.type = TYPE_WATER;

	tagSkill razorleaf;
	razorleaf.name = "잎날가르기";
	razorleaf.power = 1.4;
	razorleaf.downAtk = 0;
	razorleaf.downdef = 0;
	razorleaf.downdex = 0;
	razorleaf.maxuse = 25;
	razorleaf.use = 25;
	razorleaf.type = TYPE_GLASS;

	//===========================================

	tagMonster Cyndaquil;
	Cyndaquil.name = "브케인";
	Cyndaquil.number = 1;
	Cyndaquil.lv = 1;
	Cyndaquil.maxHp = 12;
	Cyndaquil.hp = 12;
	Cyndaquil.atk = 6;
	Cyndaquil.def = 5;
	Cyndaquil.dex = 7;
	Cyndaquil.type = TYPE_FIRE;
	Cyndaquil.skill1 = tackle;
	Cyndaquil.skill2 = leer;
	Cyndaquil.skill3 = empty;
	Cyndaquil.skill4 = empty;
	Cyndaquil.haveitem = iempty;
	m_vAllMonster.push_back(Cyndaquil);

	tagMonster Totodile;
	Totodile.name = "리아코";
	Totodile.number = 2;
	Totodile.lv = 1;
	Totodile.maxHp = 12;
	Totodile.hp = 12;
	Totodile.atk = 7;
	Totodile.def = 6;
	Totodile.dex = 5;
	Totodile.type = TYPE_WATER;
	Totodile.skill1 = scratch;
	Totodile.skill2 = growl;
	Totodile.skill3 = empty;
	Totodile.skill4 = empty;
	Totodile.haveitem = iempty;
	m_vAllMonster.push_back(Totodile);

	tagMonster Chikorita;
	Chikorita.name = "치코리타";
	Chikorita.number = 3;
	Chikorita.lv = 1;
	Chikorita.maxHp = 12;
	Chikorita.hp = 12;
	Chikorita.atk = 5;
	Chikorita.def = 7;
	Chikorita.dex = 6;
	Chikorita.type = TYPE_GLASS;
	Chikorita.skill1 = tackle;
	Chikorita.skill2 = leer;
	Chikorita.skill3 = empty;
	Chikorita.skill4 = empty;
	Chikorita.haveitem = iempty;
	m_vAllMonster.push_back(Chikorita);


	tagMonster Charmander;
	Charmander.name = "파이리";
	Charmander.number = 4;
	Charmander.lv = 1;
	Charmander.maxHp = 11;
	Charmander.hp = 11;
	Charmander.atk = 7;
	Charmander.def = 4;
	Charmander.dex = 7;
	Charmander.type = TYPE_FIRE;
	Charmander.skill1 = scratch;
	Charmander.skill2 = tailwhile;
	Charmander.skill3 = empty;
	Charmander.skill4 = empty;
	Charmander.haveitem = iempty;
	m_vAllMonster.push_back(Charmander);
}

tagMonster pokemon::rendommonster()
{
	int num = rand() % m_vAllMonster.size();
	
	m_viAllMonster = m_vAllMonster.begin() + num;

	m_viAllMonster->lv = rand() % 6 + 1;
	m_viAllMonster->maxHp += m_viAllMonster->lv * 2;
	m_viAllMonster->hp += m_viAllMonster->lv * 2;
	m_viAllMonster->atk += m_viAllMonster->lv * 1;
	m_viAllMonster->def += m_viAllMonster->lv * 1;
	m_viAllMonster->dex += m_viAllMonster->lv * 1;

	return *m_viAllMonster;
}

tagMonster pokemon::getPokemon(int num)
{
	m_viAllMonster = m_vAllMonster.begin() + num;

	return *m_viAllMonster;
}
