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
	//�������������
	int itemOutput(int num);
	//���� ������ �����ϱ�
	tagItemInfo buyItem(int &gold);

	void renderShop();

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
	void textclear();
};

