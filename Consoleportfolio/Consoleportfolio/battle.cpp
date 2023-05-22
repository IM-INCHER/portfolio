#include "battle.h"



battle::battle()
{
}


battle::~battle()
{
}

void battle::battleScene()
{
	gotoxy(86, 23);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	for (int i = 24; i < 38; i++)
	{
		gotoxy(86, i);
		cout << "早";
		gotoxy(154, i);
		cout << "早";
	}
	gotoxy(86, 38);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(58, 23);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	for (int i = 24; i < 33; i++)
	{
		gotoxy(58, i);
		cout << "早";
		gotoxy(84, i);
		cout << "早";
	}
	gotoxy(58, 33);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(72, 3);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	for (int i = 4; i < 13; i++)
	{
		gotoxy(72, i);
		cout << "早";
		gotoxy(98, i);
		cout << "早";
	}
	gotoxy(72, 13);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(4, 3);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	for (int i = 4; i < 13; i++)
	{
		gotoxy(4, i);
		cout << "早";
		gotoxy(30, i);
		cout << "早";
	}
	gotoxy(4, 13);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收旭";

}

void battle::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void battle::setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
