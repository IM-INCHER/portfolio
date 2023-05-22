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
	ITEM itemKind;			//아이템종류
	string name;			//아이템 이름
	string description;		//아이템 설명
	int atk;
	int def;
	int dex;			//아이템특성
	int price;				//아이템가격
	int count;				//아이템 갯수
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