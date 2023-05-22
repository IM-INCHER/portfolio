#include "pokemonRender.h"



pokemonRender::pokemonRender()
{
}


pokemonRender::~pokemonRender()
{
}

void pokemonRender::renderPairi(int x, int y)
{
	//------------------------
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 10 + i * 2, y + 1);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 36, y + 1);
	setcolor(0, 0);
	cout << "け";

	//-------------------------
	gotoxy(x + 8, y + 2);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 2);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 16, y + 2);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 18, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 36, y + 2);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 38, y + 2);
	setcolor(0, 0);
	cout << "け";

	//------------------------------
	gotoxy(x + 6, y + 3);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 8 + i * 2, y + 3);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 18, y + 3);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 20, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 3);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 36 + i * 2, y + 3);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 40, y + 3);
	setcolor(0, 0);
	cout << "け";

	//-----------------------
	gotoxy(x + 6, y + 4);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 6; i++)
	{
		gotoxy(x + 8 + i * 2, y + 4);
		setcolor(12, 12);
		cout << "け";
	}
	cout << "け";
	gotoxy(x + 20, y + 4);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 4);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 36 + i * 2, y + 4);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 40, y + 4);
	setcolor(0, 0);
	cout << "け";

	//-----------------------
	gotoxy(x + 4, y + 5);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 7; i++)
	{
		gotoxy(x + 6 + i * 2, y + 5);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 20, y + 5);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 22, y + 5);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 5);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 34 + i * 2, y + 5);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 38, y + 5);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 40, y + 5);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 42, y + 5);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 2, y + 6);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 4 + i * 2, y + 6);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 12, y + 6);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 14, y + 6);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 16 + i * 2, y + 6);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 20, y + 6);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 22, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 6);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 36, y + 6);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 40, y + 6);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 42, y + 6);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 2, y + 7);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 4 + i * 2, y + 7);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 12, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 7);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 1; i++)
	{
		gotoxy(x + 16 + i * 2, y + 7);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 18, y + 7);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 20, y + 7);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 22, y + 7);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 24, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 7);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 36, y + 7);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 38, y + 7);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 40, y + 7);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 42, y + 7);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 2, y + 8);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 4 + i * 2, y + 8);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 12, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 8);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 1; i++)
	{
		gotoxy(x + 16 + i * 2, y + 8);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 18, y + 8);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 20, y + 8);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 22, y + 8);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 24, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 36, y + 8);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 38, y + 8);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 40, y + 8);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 4, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 6, y + 9);
	setcolor(4, 4);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 8 + i * 2, y + 9);
		setcolor(12, 12);
		cout << "け";
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 16 + i * 2, y + 9);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 26, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 36, y + 9);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 9);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 6, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 8, y + 10);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 10; i++)
	{
		gotoxy(x + 10 + i * 2, y + 10);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 28, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 10);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 36, y + 10);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 10);
	setcolor(0, 0);
	cout << "け";

	//---------------------------
	gotoxy(x + 10, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 11, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 16, y + 11);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 18, y + 11);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 20, y + 11);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 22 + i * 2, y + 11);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 28, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 11);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 34, y + 11);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 36, y + 11);
	setcolor(0, 0);
	cout << "け";

	//--------------------------
	gotoxy(x + 12, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 12);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 16, y + 12);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 18, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 12);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 22, y + 12);
	setcolor(12, 12);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 12);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 30, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 12);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 34, y + 12);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 36, y + 12);
	setcolor(0, 0);
	cout << "け";

	//--------------------------
	gotoxy(x + 12, y + 13);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 16, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 18, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 20, y + 13);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 13);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 13);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 30, y + 13);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 13);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 34, y + 13);
	setcolor(0, 0);
	cout << "け";

	//--------------------------
	gotoxy(x + 10, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 14);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 14, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 16, y + 14);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 18, y + 14);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 20, y + 14);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 22 + i * 2, y + 14);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 30, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 14);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 12, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 16, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 18, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 20, y + 15);
	setcolor(6, 6);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 22 + i * 2, y + 15);
		setcolor(4, 4);
		cout << "け";
	}
	gotoxy(x + 28, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 15);
	setcolor(0, 0);
	cout << "け";

	//------------------------------
	gotoxy(x + 18, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 16);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 26, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 28, y + 16);
	setcolor(0, 0);
	cout << "け";

	//-------------------------------
	gotoxy(x + 20, y + 17);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 17);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 24, y + 17);
	setcolor(4, 4);
	cout << "け";
	gotoxy(x + 26, y + 17);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 28, y + 17);
	setcolor(0, 0);
	cout << "け";

	//-----------------------------------
	gotoxy(x + 22, y + 18);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 18);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 18);
	setcolor(0, 0);
	cout << "け";
}

void pokemonRender::renderVcain(int x, int y)
{
	//----------------------------------
	gotoxy(x + 36, y + 1);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 38, y + 1);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 44, y + 1);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 46, y + 1);
	setcolor(0, 0);
	cout << "け";

	//---------------------------------------
	gotoxy(x + 26, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 28, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 36, y + 2);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 42, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 44, y + 2);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 46, y + 2);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 16 + i * 2, y + 3);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 26, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 28, y + 3);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 30, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 34, y + 3);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 36, y + 3);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 40, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 42, y + 3);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 44, y + 3);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 46, y + 3);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------
	gotoxy(x + 14, y + 4);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 16 + i * 2, y + 4);
		setcolor(8, 8);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 24 + i * 2, y + 4);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 8; i++)
	{
		gotoxy(x + 28 + i * 2, y + 4);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 44, y + 4);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------
	gotoxy(x + 12, y + 5);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 14 + i * 2, y + 5);
		setcolor(8, 8);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 20 + i * 2, y + 5);
		setcolor(7, 7);
		cout << "け";
	}
	gotoxy(x + 26, y + 5);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 28 + i * 2, y + 5);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 34, y + 5);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 36 + i * 2, y + 5);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 44, y + 5);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------
	gotoxy(x + 12, y + 6);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 6);
		setcolor(8, 8);
		cout << "け";
	}
	for (int i = 0; i < 1; i++)
	{
		gotoxy(x + 18 + i * 2, y + 6);
		setcolor(7, 7);
		cout << "け";
	}
	gotoxy(x + 20, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 22, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 24, y + 6);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 26, y + 6);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 28, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 32, y + 6);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 34, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 36, y + 6);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 38, y + 6);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 40, y + 6);
	setcolor(12, 12);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 42 + i * 2, y + 6);
		setcolor(0, 0);
		cout << "け";
	}

	//------------------------------------
	gotoxy(x + 10, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 7);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 14, y + 7);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 16, y + 7);
	setcolor(7, 7);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 18 + i * 2, y + 7);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 26, y + 7);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 28, y + 7);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 30 + i * 2, y + 7);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 38, y + 7);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 40, y + 7);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 42 + i * 2, y + 7);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 46, y + 7);
	setcolor(0, 0);
	cout << "け";

	//------------------------------------
	gotoxy(x + 10, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 8);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 14, y + 8);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 16, y + 8);
	setcolor(7, 7);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 18 + i * 2, y + 8);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 22, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 8);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 28, y + 8);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 30 + i * 2, y + 8);
		setcolor(14, 14);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 40 + i * 2, y + 8);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 44, y + 8);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------
	gotoxy(x + 8, y + 9);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 9);
		setcolor(8, 8);
		cout << "け";
	}
	gotoxy(x + 16, y + 9);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 18, y + 9);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 20, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 9);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 24, y + 9);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 26, y + 9);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 28, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 9);
	setcolor(8, 8);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 32 + i * 2, y + 9);
		setcolor(14, 14);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 38 + i * 2, y + 9);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 44, y + 9);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------
	gotoxy(x + 8, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 10);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 12, y + 10);
	setcolor(8, 8);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 14 + i * 2, y + 10);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 24, y + 10);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 26, y + 10);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 28 + i * 2, y + 10);
		setcolor(8, 8);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 36 + i * 2, y + 10);
		setcolor(14, 14);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 42 + i * 2, y + 10);
		setcolor(12, 12);
		cout << "け";
	}
	gotoxy(x + 46, y + 10);
	setcolor(0, 0);
	cout << "け";

	//-------------------------------
	gotoxy(x + 8, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 11);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 12, y + 11);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 14 + i * 2, y + 11);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 20, y + 11);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 22, y + 11);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 24, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 28, y + 11);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 30 + i * 2, y + 11);
		setcolor(8, 8);
		cout << "け";
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 38 + i * 2, y + 11);
		setcolor(0, 0);
		cout << "け";
	}

	//----------------------------------------
	gotoxy(x + 10, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 18, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 12);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 24, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 12);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 28, y + 12);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 30, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 12);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 34, y + 12);
	setcolor(8, 8);
	cout << "け";
	gotoxy(x + 36, y + 12);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------
	gotoxy(x + 20, y + 13);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 13);
	setcolor(14, 14);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 13);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 30, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 32, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 34, y + 13);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 36, y + 13);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	gotoxy(x + 20, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 14);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 24 + i * 2, y + 14);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 32, y + 14);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 34, y + 14);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 36, y + 14);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------------------
	gotoxy(x + 18, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 15);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 22, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 24, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 28, y + 15);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 32, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 34, y + 15);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	for (int i = 0; i < 9; i++)
	{
		gotoxy(x + 18 + i * 2, y + 16);
		setcolor(0, 0);
		cout << "け";
	}

	//------------------------------------
	gotoxy(x + 28, y + 17);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 17);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 32, y + 17);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 34, y + 17);
	setcolor(0, 0);
	cout << "け";

	//-----------------------------
	gotoxy(x + 30, y + 18);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 32, y + 18);
	setcolor(0, 0);
	cout << "け";
}

void pokemonRender::renderRiako(int x, int y)
{
	//------------------------------
	gotoxy(x + 10, y + 1);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 1);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 16 + i * 2, y + 1);
		setcolor(0, 0);
		cout << "け";
	}

	//------------------------------------
	gotoxy(x + 8, y + 2);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 2);
	setcolor(11, 11);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 12 + i * 2, y + 2);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 16, y + 2);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 18, y + 2);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 20, y + 2);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 22, y + 2);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------
	gotoxy(x + 8, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 3);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 12, y + 3);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 14, y + 3);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 16, y + 3);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 18, y + 3);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 20, y + 3);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 20, y + 3);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 22 + i * 2, y + 3);
		setcolor(0, 0);
		cout << "け";
	}

	//---------------------------------
	gotoxy(x + 8, y + 4);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 4);
		setcolor(11, 11);
		cout << "け";
	}
	gotoxy(x + 16, y + 4);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 18 + i * 2, y + 4);
		setcolor(15, 15);
		cout << "け";
	}
	gotoxy(x + 22, y + 4);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 4);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 26, y + 4);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	gotoxy(x + 4, y + 5);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 6, y + 5);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 8 + i * 2, y + 5);
		setcolor(11, 11);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 5);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 18, y + 5);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 20, y + 5);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 22, y + 5);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 5);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 26, y + 5);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------
	gotoxy(x + 2, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 6);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 6, y + 6);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 8, y + 6);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 10, y + 6);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 12, y + 6);
	setcolor(11, 11);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 6);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 18, y + 6);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 20, y + 6);
	setcolor(11, 11);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 22 + i * 2, y + 6);
		setcolor(0, 0);
		cout << "け";
	}

	//----------------------------------
	gotoxy(x + 2, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 7);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 6, y + 7);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 8 + i * 2, y + 7);
		setcolor(11, 11);
		cout << "け";
	}
	gotoxy(x + 18, y + 7);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 20, y + 7);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 22, y + 7);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 24, y + 7);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 7);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 28, y + 7);
	setcolor(0, 0);
	cout << "け";

	//-------------------------------------
	gotoxy(x + 2, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 8);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 6, y + 8);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 8, y + 8);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 10, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 8);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 16, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 18, y + 8);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 20, y + 8);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 22, y + 8);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 24, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 8);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 28, y + 8);
	setcolor(0, 0);
	cout << "け";

	//------------------------------
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 4 + i * 2, y + 9);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 12 + i * 2, y + 9);
		setcolor(12, 12);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 18 + i * 2, y + 9);
		setcolor(11, 11);
		cout << "け";
	}
	gotoxy(x + 24, y + 9);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 26 + i * 2, y + 9);
		setcolor(0, 0);
		cout << "け";
	}

	//-----------------------------------------
	gotoxy(x + 8, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 10);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 12, y + 10);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 14, y + 10);
	setcolor(15, 15);
	cout << "け";
	gotoxy(x + 16, y + 10);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 18, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 10);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 22, y + 10);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 24, y + 10);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 26 + i * 2, y + 10);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 30, y + 10);
	setcolor(12, 12);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 32 + i * 2, y + 10);
		setcolor(0, 0);
		cout << "け";
	}

	//-----------------------------------------
	gotoxy(x + 8, y + 11);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 11);
		setcolor(11, 11);
		cout << "け";
	}
	gotoxy(x + 16, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 18, y + 11);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 20 + i * 2, y + 11);
		setcolor(11, 11);
		cout << "け";
	}
	gotoxy(x + 26, y + 11);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 28 + i * 2, y + 11);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 32, y + 11);
	setcolor(3, 3);
	cout << "け";
	for (int i = 0; i < 1; i++)
	{
		gotoxy(x + 34 + i * 2, y + 11);
		setcolor(0, 0);
		cout << "け";
	}

	//----------------------------------
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 12);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 16 + i * 2, y + 12);
		setcolor(3, 3);
		cout << "け";
	}
	gotoxy(x + 20, y + 12);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 22, y + 12);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 24 + i * 2, y + 12);
		setcolor(3, 3);
		cout << "け";
	}
	gotoxy(x + 28, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 30, y + 12);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 32, y + 12);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------------
	gotoxy(x + 10, y + 13);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 14, y + 13);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 16, y + 13);
	setcolor(14, 14);
	cout << "け";
	gotoxy(x + 18, y + 13);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 20, y + 13);
	setcolor(11, 11);
	cout << "け";
	gotoxy(x + 22, y + 13);
	setcolor(11, 11);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 13);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 30, y + 13);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 32, y + 13);
	setcolor(0, 0);
	cout << "け";

	//-------------------------------------
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 8 + i * 2, y + 14);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 14);
		setcolor(14, 14);
		cout << "け";
	}
	gotoxy(x + 18, y + 14);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 20 + i * 2, y + 14);
		setcolor(11, 11);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 24 + i * 2, y + 14);
		setcolor(3, 3);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 28 + i * 2, y + 14);
		setcolor(0, 0);
		cout << "け";
	}

	//-----------------------------------------------------
	gotoxy(x + 6, y + 15);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 8 + i * 2, y + 15);
		setcolor(11, 11);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 12 + i * 2, y + 15);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 16, y + 15);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 18, y + 15);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 20 + i * 2, y + 15);
		setcolor(3, 3);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 26 + i * 2, y + 15);
		setcolor(0, 0);
		cout << "け";
	}

	//----------------------------------
	for (int i = 0; i < 10; i++)
	{
		gotoxy(x + 8 + i * 2, y + 16);
		setcolor(0, 0);
		cout << "け";
	}

	//----------------------------------
	gotoxy(x + 20, y + 17);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 17);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 24, y + 17);
	setcolor(3, 3);
	cout << "け";
	gotoxy(x + 26, y + 17);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 22 + i * 2, y + 18);
		setcolor(0, 0);
		cout << "け";
	}
}

void pokemonRender::renderChikorita(int x, int y)
{
	//-----------------------
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 18 + i * 2, y + 1);
		setcolor(0, 0);
		cout << "け";
	}

	//------------------------------------
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 2);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 18 + i * 2, y + 2);
		setcolor(10, 10);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 22 + i * 2, y + 2);
		setcolor(2, 2);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 26 + i * 2, y + 2);
		setcolor(0, 0);
		cout << "け";
	}

	//-----------------------------
	gotoxy(x + 12, y + 3);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 14 + i * 2, y + 3);
		setcolor(10, 10);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 3);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 30, y + 3);
	setcolor(0, 0);
	cout << "け";

	//------------------------
	gotoxy(x + 10, y + 4);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 4);
	setcolor(10, 10);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 14 + i * 2, y + 4);
		setcolor(2, 2);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 24 + i * 2, y + 4);
		setcolor(0, 0);
		cout << "け";
	}

	//-------------------------------
	gotoxy(x + 8, y + 5);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 5);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 5);
	setcolor(2, 2);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 14 + i * 2, y + 5);
		setcolor(0, 0);
		cout << "け";
	}

	//---------------------------------------
	gotoxy(x + 6, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 8, y + 6);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 10, y + 6);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 12, y + 6);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 6);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 18, y + 6);
	setcolor(0, 0);
	cout << "け";

	//----------------------------
	gotoxy(x + 4, y + 7);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 6; i++)
	{
		gotoxy(x + 6 + i * 2, y + 7);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 18, y + 7);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 20, y + 7);
	setcolor(0, 0);
	cout << "け";

	//----------------------------------------
	gotoxy(x + 2, y + 8);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 8);
	setcolor(15, 15);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 6 + i * 2, y + 8);
		setcolor(10, 10);
		cout << "け";
	}
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 8);
		setcolor(6, 6);
		cout << "け";
	}
	gotoxy(x + 18, y + 8);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 20, y + 8);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	gotoxy(x + 2, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 9);
	setcolor(13, 13);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 6 + i * 2, y + 9);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 12, y + 9);
	setcolor(6, 6);
	cout << "け";
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 14 + i * 2, y + 9);
		setcolor(15, 15);
		cout << "け";
	}
	gotoxy(x + 18, y + 9);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 20, y + 9);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 22, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 9);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 28, y + 9);
	setcolor(0, 0);
	cout << "け";

	//------------------------------
	gotoxy(x + 2, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 10);
	setcolor(12, 12);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 6 + i * 2, y + 10);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 12, y + 10);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 14, y + 10);
	setcolor(13, 13);
	cout << "け";
	gotoxy(x + 16, y + 10);
	setcolor(15, 15);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 18 + i * 2, y + 10);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 24, y + 10);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 10);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 28, y + 10);
	setcolor(0, 0);
	cout << "け";

	//---------------------------------------
	gotoxy(x + 2, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 4, y + 11);
	setcolor(10, 10);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 6 + i * 2, y + 11);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 12, y + 11);
	setcolor(12, 12);
	cout << "け";
	gotoxy(x + 14, y + 11);
	setcolor(13, 13);
	cout << "け";
	gotoxy(x + 16, y + 11);
	setcolor(15, 15);
	cout << "け";
	for (int i = 0; i < 1; i++)
	{
		gotoxy(x + 18 + i * 2, y + 11);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 20, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 22, y + 11);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 26, y + 11);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 24, y + 11);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 28, y + 11);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------
	gotoxy(x + 4, y + 12);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 6, y + 12);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 8, y + 12);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 10 + i * 2, y + 12);
		setcolor(10, 10);
		cout << "け";
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 16 + i * 2, y + 12);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 26, y + 12);
	setcolor(6, 6);
	cout << "け";
	gotoxy(x + 28, y + 12);
	setcolor(0, 0);
	cout << "け";

	//------------------------------------
	gotoxy(x + 4, y + 13);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 6 + i * 2, y + 13);
		setcolor(10, 10);
		cout << "け";
	}
	gotoxy(x + 16, y + 13);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 18 + i * 2, y + 13);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 28, y + 13);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------------------
	gotoxy(x + 4, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 6, y + 14);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 8, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 14);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 12, y + 14);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 14, y + 14);
	setcolor(10, 10);
	cout << "け";
	for (int i = 0; i < 6; i++)
	{
		gotoxy(x + 16 + i * 2, y + 14);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 28, y + 14);
	setcolor(0, 0);
	cout << "け";

	//---------------------------
	gotoxy(x + 4, y + 15);
	setcolor(0, 0);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 6 + i * 2, y + 15);
		setcolor(10, 10);
		cout << "け";
	}
	for (int i = 0; i < 7; i++)
	{
		gotoxy(x + 14 + i * 2, y + 15);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 28, y + 15);
	setcolor(0, 0);
	cout << "け";

	//--------------------------------
	gotoxy(x + 4, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 6, y + 16);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 8, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 10, y + 16);
	setcolor(10, 10);
	cout << "け";
	gotoxy(x + 12, y + 16);
	setcolor(10, 10);
	cout << "け";
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x + 14 + i * 2, y + 16);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 24, y + 16);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 26, y + 16);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 28, y + 16);
	setcolor(0, 0);
	cout << "け";

	//-----------------------------
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 6 + i * 2, y + 17);
		setcolor(0, 0);
		cout << "け";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoxy(x + 12 + i * 2, y + 17);
		setcolor(2, 2);
		cout << "け";
	}
	gotoxy(x + 18, y + 17);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 17);
	setcolor(2, 2);
	cout << "け";
	for (int i = 0; i < 4; i++)
	{
		gotoxy(x + 22 + i * 2, y + 17);
		setcolor(0, 0);
		cout << "け";
	}

	//--------------------------------
	for (int i = 0; i < 2; i++)
	{
		gotoxy(x + 12 + i * 2, y + 18);
		setcolor(0, 0);
		cout << "け";
	}
	gotoxy(x + 16, y + 18);
	setcolor(2, 2);
	cout << "け";
	gotoxy(x + 18, y + 18);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 20, y + 18);
	setcolor(0, 0);
	cout << "け";

	//-----------------------------------
	gotoxy(x + 16, y + 19);
	setcolor(0, 0);
	cout << "け";
	gotoxy(x + 18, y + 19);
	setcolor(0, 0);
	cout << "け";
}

void pokemonRender::render(int x, int y, int kind)
{
	switch (kind)
	{
	case 1:
		renderVcain(x, y);
		break;
	case 2:
		renderRiako(x, y);
		break;
	case 3:
		renderChikorita(x, y);
		break;
	case 4:
		renderPairi(x, y);
		break;
	}
}

void pokemonRender::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void pokemonRender::setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
