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
	cout << "������������������������������������������������������������������������������������������������������������������������������������������";
	for (int i = 24; i < 38; i++)
	{
		gotoxy(86, i);
		cout << "��";
		gotoxy(154, i);
		cout << "��";
	}
	gotoxy(86, 38);
	cout << "������������������������������������������������������������������������������������������������������������������������������������������";

	gotoxy(58, 23);
	cout << "������������������������������������������������������";
	for (int i = 24; i < 33; i++)
	{
		gotoxy(58, i);
		cout << "��";
		gotoxy(84, i);
		cout << "��";
	}
	gotoxy(58, 33);
	cout << "������������������������������������������������������";

	gotoxy(72, 3);
	cout << "������������������������������������������������������";
	for (int i = 4; i < 13; i++)
	{
		gotoxy(72, i);
		cout << "��";
		gotoxy(98, i);
		cout << "��";
	}
	gotoxy(72, 13);
	cout << "������������������������������������������������������";

	gotoxy(4, 3);
	cout << "������������������������������������������������������";
	for (int i = 4; i < 13; i++)
	{
		gotoxy(4, i);
		cout << "��";
		gotoxy(30, i);
		cout << "��";
	}
	gotoxy(4, 13);
	cout << "������������������������������������������������������";

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
