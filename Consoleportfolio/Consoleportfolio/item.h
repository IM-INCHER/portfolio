#pragma once
#include "pokemonRender.h"

enum ITEM
{
	ITEM_EMPTY,
	ITEM_AKSSESARI,
	ITEM_POSION,
	ITEM_BALL,
	ITEM_SKILLMACHINE
};

struct tagItemInfo
{
	ITEM itemKind;			//����������
	string name;			//������ �̸�
	string description;		//������ ����
	int atk;
	int def;
	int dex;			//������Ư��
	int price;				//�����۰���
	int count;				//������ ����
};

//void gotoxy(int x, int y)
//{
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//void setcolor(int color, int bgcolor)
//{
//	color &= 0xf;
//	bgcolor &= 0xf;
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
//}