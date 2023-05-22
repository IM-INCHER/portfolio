#pragma once
#include "item.h"

class shop
{
private:
	vector<tagItemInfo> m_vItem;
	vector<tagItemInfo>::iterator m_viItem;

public:
	shop();
	~shop();

	void itemSetup();
	//아이템출력하자
	int itemOutput(int num);
	//상점 아이템 구매하기
	tagItemInfo buyItem(int &gold);

	void renderShop();

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
	void textclear();
};

