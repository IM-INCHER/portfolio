#include "map.h"



map::map()
{
	m_player = new character;
	m_shop = new shop;
	m_pokemon = new pokemon;
	m_shop->itemSetup();
	m_pokemon->monsterSetting();

	pRender = new pokemonRender;
}


map::~map()
{
}

int map::startSecen()
{
	system("cls");

	int key;
	int select = 0;

	gotoxy(30, 7);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	gotoxy(30, 8);
	cout << "早";
	gotoxy(88, 8);
	cout << "早";
	gotoxy(30, 9);
	cout << "早";
	gotoxy(88, 9);
	cout << "早";
	gotoxy(30, 10);
	cout << "早";
	gotoxy(88, 10);
	cout << "早";
	gotoxy(30, 11);
	cout << "早";
	gotoxy(88, 11);
	cout << "早";
	gotoxy(30, 12);
	cout << "早";
	gotoxy(88, 12);
	cout << "早";
	gotoxy(30, 13);
	cout << "早";
	gotoxy(88, 13);
	cout << "早";
	gotoxy(30, 14);
	cout << "早";
	gotoxy(88, 14);
	cout << "早";
	gotoxy(30, 15);
	cout << "早";
	gotoxy(88, 15);
	cout << "早";
	gotoxy(30, 16);
	cout << "早";
	gotoxy(88, 16);
	cout << "早";
	gotoxy(30, 17);
	cout << "早";
	gotoxy(88, 17);
	cout << "早";
	gotoxy(30, 18);
	cout << "早";
	gotoxy(88, 18);
	cout << "早";
	gotoxy(30, 19);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(45, 10);
	cout << "億煎遴 賅я擊 衛濛и棻";
	gotoxy(45, 13);
	cout << "賅я擊 啗樓и棻";
	gotoxy(45, 16);
	cout << "賅я擊 斜虜菩棻";

	//renderPlayer(1, 1);


	while (true)
	{
		setcolor(0, 15);
		gotoxy(40, 10 + (select * 3));
		cout << "Ⅱ";

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				setcolor(15, 15);
				gotoxy(40, 10 + (select * 3));
				cout << "﹥";
				select--;
				if (select < 0) select = 2;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(40, 10 + (select * 3));
				cout << "﹥";
				select++;
				if (select > 2) select = 0;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			return select;
		}
	}
}

void map::pokemonSelect()
{
	system("cls");

	int key;
	int select = 0;

	gotoxy(30, 7);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	gotoxy(30, 8);
	cout << "早";
	gotoxy(88, 8);
	cout << "早";
	gotoxy(30, 9);
	cout << "早";
	gotoxy(88, 9);
	cout << "早";
	gotoxy(30, 10);
	cout << "早";
	gotoxy(88, 10);
	cout << "早";
	gotoxy(30, 11);
	cout << "早";
	gotoxy(88, 11);
	cout << "早";
	gotoxy(30, 12);
	cout << "早";
	gotoxy(88, 12);
	cout << "早";
	gotoxy(30, 13);
	cout << "早";
	gotoxy(88, 13);
	cout << "早";
	gotoxy(30, 14);
	cout << "早";
	gotoxy(88, 14);
	cout << "早";
	gotoxy(30, 15);
	cout << "早";
	gotoxy(88, 15);
	cout << "早";
	gotoxy(30, 16);
	cout << "早";
	gotoxy(88, 16);
	cout << "早";
	gotoxy(30, 17);
	cout << "早";
	gotoxy(88, 17);
	cout << "早";
	gotoxy(30, 18);
	cout << "早";
	gotoxy(88, 18);
	cout << "早";
	gotoxy(30, 19);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(47, 8);
	cout << "蝶顫た ん鰍跨擊 摹鷗п輿撮蹂";

	gotoxy(45, 10);
	cout << "粽馨檣";
	gotoxy(45, 13);
	cout << "葬嬴囀";
	gotoxy(45, 16);
	cout << "纂囀葬顫";

	while (true)
	{
		setcolor(0, 15);
		gotoxy(40, 10 + (select * 3));
		cout << "Ⅱ";

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				setcolor(15, 15);
				gotoxy(40, 10 + (select * 3));
				cout << "﹥";
				select--;
				if (select < 0) select = 2;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(40, 10 + (select * 3));
				cout << "﹥";
				select++;
				if (select > 2) select = 0;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			tagMonster temp;

			temp = m_pokemon->getPokemon(select);

			temp.lv = 5;
			temp.maxHp += 2 * temp.lv;
			temp.hp += 2 * temp.lv;
			temp.atk += 1 * temp.lv;
			temp.def += 0.6 * temp.lv;
			temp.dex += 1 * temp.lv;

			m_player->addMonster(temp);

			break;
		}
	}
}

VILLAGEMAP map::village(int &x, int &y)
{
	system("cls");

	int key;

	//望
	for (int i = 0; i < 87; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			gotoxy(i, j);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	//釭鼠
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			gotoxy(i, j);
			setcolor(2, 2);
			cout << "仃";
		}
	}

	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			gotoxy(i, j + 10);
			setcolor(2, 2);
			cout << "仃";
		}
	}

	//夢餌餵
	for (int i = 0; i < 35; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			gotoxy(i + 26, j);
			setcolor(8, 8);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 42, j + 6);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	//輿檣奢餵
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			gotoxy(i + 66, j);
			setcolor(14, 14);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 74, j + 6);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	//ん鰍撫攪
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			gotoxy(i + 34, j + 11);
			setcolor(12, 12);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 44, j + 11);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	//憧
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			gotoxy(i + 62, j + 11);
			setcolor(9, 9);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 72, j + 11);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if ((x == 74 && y - 1 == 6) || (x == 76 && y - 1 == 6)) return VILLAGE_HOUSE;
				if ((x == 44 && y - 1 == 6) || (x == 42 && y - 1 == 6)) return VILLAGE_LABORATORY;

				if (y - 1 < 0 || (x <= 20 && y - 1 <= 7) || (x >= 26 && x <= 60 && y - 1 <= 6) || (x >= 66 && x <= 84 && y - 1 <= 6) ||
					(x >= 34 && x <= 56 && y == 19) || ((x >= 62 && x <= 84 && y == 19))) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y--;
				break;
			case DOWN:
				if ((x == 72 && y + 1 == 11) || (x == 74 && y + 1 == 11)) return VILLAGE_SHOP;
				if ((x == 44 && y + 1 == 11) || (x == 46 && y + 1 == 11)) return VILLAGE_POKECENTER;

				if (y + 1 > 19 || (x <= 20 && y + 1 >= 10) || (x >= 34 && x <= 56 && y + 1 == 11) || (x >= 62 && x <= 84 && y + 1 == 11)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y++;
				break;
			case LEFT:
				if (x - 2 < 0) return VILLAGE_OUT;

				if ((x - 2 <= 20 && (y <= 7 || y >= 10)) || (y <= 6 && (x - 2 == 60 || x - 2 == 84)) || ((y >= 11 && y <= 18) && (x - 2 == 84 || x - 2 == 56))) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x -= 2;
				break;
			case RIGHT:
				if (x + 2 > 87 || (y <= 6 && (x + 2 == 26 || x + 2 == 66)) || ((y >= 11 && y <= 18) && (x + 2 == 34 || x + 2 == 62))) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x += 2;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 120)
		{
			locationMenu(menu());
			system("cls");
			//望
			for (int i = 0; i < 87; i++)
			{
				for (int j = 0; j < 20; j++)
				{
					gotoxy(i, j);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			//釭鼠
			for (int i = 0; i < 21; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					gotoxy(i, j);
					setcolor(2, 2);
					cout << "仃";
				}
			}

			for (int i = 0; i < 21; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					gotoxy(i, j + 10);
					setcolor(2, 2);
					cout << "仃";
				}
			}

			//夢餌餵
			for (int i = 0; i < 35; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					gotoxy(i + 26, j);
					setcolor(8, 8);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 42, j + 6);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			//輿檣奢餵
			for (int i = 0; i < 19; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					gotoxy(i + 66, j);
					setcolor(14, 14);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 74, j + 6);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			//ん鰍撫攪
			for (int i = 0; i < 23; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					gotoxy(i + 34, j + 11);
					setcolor(12, 12);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 44, j + 11);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			//憧
			for (int i = 0; i < 23; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					gotoxy(i + 62, j + 11);
					setcolor(9, 9);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 72, j + 11);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			renderUI();
		}

		/*gotoxy(3, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
}

MENU map::menu()
{
	int key;
	int select = 0;
	while (1)
	{
		setcolor(0, 15);
		gotoxy(92, 2 + (select * 2));
		cout << "Ⅱ";

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				select--;
				if (select < 0) select = 3;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				select++;
				if (select > 3) select = 0;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			switch (select)
			{
			case 0:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				setcolor(0, 15);
				return MENU_POKEMON;
				break;
			case 1:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				setcolor(0, 15);
				return MENU_BAG;
				break;
			case 2:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				setcolor(0, 15);
				return MENU_CANCEL;
				break;
			case 3:
				setcolor(15, 15);
				gotoxy(92, 2 + (select * 2));
				cout << "﹥";
				setcolor(0, 15);
				return MENU_END;
				break;
			}
		}
	}
}

void map::locationMenu(MENU menu)
{
	switch (menu)
	{
	case MENU_BAG:
		m_player->useItem();
		break;
	case MENU_POKEMON:
		m_player->showPokemonInfo();
		break;
	case MENU_CANCEL:
		break;
	case MENU_END:
		exit(1);
		break;
	default:
		break;
	}
}

int map::house()
{
	system("cls");
	int key;
	int x = 44;
	int y = 17;

	for (int i = 26; i < 65; i++)
	{
		for (int j = 2; j < 18; j++)
		{
			gotoxy(i, j);
			setcolor(6, 6);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 44, j + 18);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(i + 60, j + 4);
			setcolor(12, 12);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 60, j + 3);
			setcolor(15, 15);
			cout << "仃";
		}
	}

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (y - 1 < 2 || ((x >= 60 && x <=62) && y == 6)) continue;

				setcolor(6, 6);
				gotoxy(x, y);
				cout << "﹥";
				y--;
				break;
			case DOWN:
				if ((x >= 44 || x <= 46) && y + 1 == 18) return 0;

				if (y + 1 > 17 || ((x >= 60 && x <= 62) && y == 2)) continue;

				setcolor(6, 6);
				gotoxy(x, y);
				cout << "﹥";
				y++;
				break;
			case LEFT:
				if (x - 2 < 26 || ((y >= 3 && y <= 5) && x == 64)) continue;

				setcolor(6, 6);
				gotoxy(x, y);
				cout << "﹥";
				x -= 2;
				break;
			case RIGHT:
				if (x + 2 > 64 || ((y >= 3 && y <= 5) && x == 58)) continue;

				setcolor(6, 6);
				gotoxy(x, y);
				cout << "﹥";
				x += 2;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 120)
		{
			locationMenu(menu());
			system("cls");
			for (int i = 26; i < 65; i++)
			{
				for (int j = 2; j < 18; j++)
				{
					gotoxy(i, j);
					setcolor(6, 6);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 44, j + 18);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(i + 60, j + 4);
					setcolor(12, 12);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 60, j + 3);
					setcolor(15, 15);
					cout << "仃";
				}
			}

			renderUI();
		}

		/*gotoxy(4, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
	
}

int map::laboratory()
{
	system("cls");

	int key;
	int x = 44;
	int y = 18;

	for (int i = 10; i < 77; i++)
	{
		for (int j = 1; j < 19; j++)
		{
			gotoxy(i, j);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 42, j + 19);
			setcolor(6, 6);
			cout << "仃";
		}
	}

	for (int i = 10; i < 29; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i, j + 11);
			setcolor(15, 15);
			cout << "仃";
		}
	}
	for (int i = 77; i > 57; i--)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i, j + 11);
			setcolor(15, 15);
			cout << "仃";
		}
	}

	for (int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gotoxy(i + 54, j + 3);
			setcolor(1, 1);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		gotoxy(i * 6 + 56, 4);
		setcolor(12, 12);
		cout << "仃";
	}

	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gotoxy(i + 10, j + 1);
			setcolor(8, 8);
			cout << "仃";
		}
	}

	gotoxy(22, 6);
	setcolor(8, 15);
	cout << "～";

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (y == 1 || (y == 4 && x >= 10 && x <= 36) || (y == 6 && x >= 54 && x <= 70) || ((y == 12 && ((x >= 10 && x <= 28) || (x >= 58 && x <= 76))))
					|| (x == 22 && y == 7)) continue;	

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y--;
				break;
			case DOWN:
				if ((x >= 42 && x <= 44 && y == 18)) return 0;

				if (y == 18 || (x >= 10 && x <= 28 && y == 10) || (x >= 58 && x <= 76 && y == 10) || ((x >= 54 || x <= 70) && y == 20) || (x == 22 && y == 5)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y++;
				break;
			case LEFT:
				if (x == 10 || (y == 11 && x == 30) || (x == 24 && y == 6) || (x == 38 && y <= 3) || (x == 72 && y >= 3 && y <= 5)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x -= 2;
				break;
			case RIGHT:
				if (x == 76 || (x == 56 && y == 11) || (x == 52 && y >= 3 && y <= 5) || (x == 20 && y == 6)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x += 2;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 120)
		{
			locationMenu(menu());
			system("cls");
			for (int i = 10; i < 77; i++)
			{
				for (int j = 1; j < 19; j++)
				{
					gotoxy(i, j);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 42, j + 19);
					setcolor(6, 6);
					cout << "仃";
				}
			}

			for (int i = 10; i < 29; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i, j + 11);
					setcolor(15, 15);
					cout << "仃";
				}
			}
			for (int i = 77; i > 57; i--)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i, j + 11);
					setcolor(15, 15);
					cout << "仃";
				}
			}

			for (int i = 0; i < 17; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					gotoxy(i + 54, j + 3);
					setcolor(1, 1);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				gotoxy(i * 6 + 56, 4);
				setcolor(12, 12);
				cout << "仃";
			}

			for (int i = 0; i < 27; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					gotoxy(i + 10, j + 1);
					setcolor(8, 8);
					cout << "仃";
				}
			}

			gotoxy(22, 6);
			setcolor(8, 15);
			cout << "～";

			renderUI();
		}

		/*gotoxy(4, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
}

int map::pokecenter()
{
	system("cls");

	int key;
	int x = 42;
	int y = 17;

	for (int i = 20; i < 67; i++)
	{
		for (int j = 1; j < 18; j++)
		{
			gotoxy(i, j);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 42, j + 18);
			setcolor(8, 8);
			cout << "仃";
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			gotoxy(i * 2 + 20, j);
			setcolor(12, 13);
			cout << "≒";
		}
	}

	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 20, j + 4);
			setcolor(0, 0);
			cout << "≒";
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gotoxy(i + 40, j + 1);
			setcolor(0, 0);
			cout << "≒";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(26 + i, j + 2);
			setcolor(5, 5);
			cout << "≒";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(i + 62, j + 12);
			setcolor(14, 14);
			cout << "≒";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(i + 56, j + 12);
			setcolor(14, 14);
			cout << "≒";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(i + 50, j + 12);
			setcolor(14, 14);
			cout << "≒";
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gotoxy(i + 50, j + 1);
			setcolor(8, 8);
			cout << "≒";
		}
	}

	gotoxy( 52, 1);
	setcolor(11, 11);
	cout << "≒";

	gotoxy(32, 3);
	setcolor(13, 15);
	cout << "≒";

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (y == 1 || (x >= 20 && x <= 40 && y == 5) 
					|| (y == 14 && x >= 50 && x <= 52)
					|| (y == 14 && x >= 56 && x <= 58)
					|| (y == 14 && x >= 62 && x <= 64)
					|| (y == 3 && x >= 50 && x <= 54)) continue;
				
				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y--;
				break;
			case DOWN:
				if ((x >= 42 && x <= 44 && y == 17)) return 0;

				if (y == 17
					|| (y == 11 && x >= 50 && x <= 52)
					|| (y == 11 && x >= 56 && x <= 58)
					|| (y == 11 && x >= 62 && x <= 64)
					) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				y++;
				break;
			case LEFT:
				if (x == 20 || (y >= 1 && y <= 4 && x == 42)
					|| (x == 54 && y >= 12 && y <= 13)
					|| (x == 60 && y >= 12 && y <= 13)
					|| (x == 66 && y >= 12 && y <= 13)
					|| (x == 56 && y >= 1 && y <= 2)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x -= 2;
				break;
			case RIGHT:
				if (x == 66 || (x == 48 && y >=12 && y<=13) 
					|| (x == 54 && y >= 12 && y <= 13)
					|| (x == 60 && y >= 12 && y <= 13)
					|| (x == 48 && y >= 1 && y <= 2)) continue;

				setcolor(7, 7);
				gotoxy(x, y);
				cout << "﹥";
				x += 2;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			if (x == 32 && y == 5)
			{
				gotoxy(4, 22);
				setcolor(0, 15);
				cout << "ん鰍跨擊 �蛹嘗萺埭炴� 濡衛虜 晦棻溥 輿撮蹂";
				Sleep(1000);
				m_player->allHeal();
				gotoxy(4, 23);
				setcolor(0, 15);
				cout << "�蛹僱Ц�蝗棲棻 棻擠縑 傳螃撮蹂~";
				Sleep(1000);
				textclear();
				break;
			}
		}
		else if (key == 120)
		{
			locationMenu(menu());
			system("cls");
			for (int i = 20; i < 67; i++)
			{
				for (int j = 1; j < 18; j++)
				{
					gotoxy(i, j);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 42, j + 18);
					setcolor(8, 8);
					cout << "仃";
				}
			}

			for (int i = 0; i < 2; i++)
			{
				for (int j = 1; j < 4; j++)
				{
					gotoxy(i * 2 + 20, j);
					setcolor(12, 13);
					cout << "≒";
				}
			}

			for (int i = 0; i < 21; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					gotoxy(i + 20, j + 4);
					setcolor(0, 0);
					cout << "≒";
				}
			}
			for (int i = 0; i < 1; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					gotoxy(i + 40, j + 1);
					setcolor(0, 0);
					cout << "≒";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(26 + i, j + 2);
					setcolor(5, 5);
					cout << "≒";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(i + 62, j + 12);
					setcolor(14, 14);
					cout << "≒";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(i + 56, j + 12);
					setcolor(14, 14);
					cout << "≒";
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(i + 50, j + 12);
					setcolor(14, 14);
					cout << "≒";
				}
			}

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					gotoxy(i + 50, j + 1);
					setcolor(8, 8);
					cout << "≒";
				}
			}

			gotoxy(52, 1);
			setcolor(11, 11);
			cout << "≒";

			gotoxy(32, 3);
			setcolor(13, 15);
			cout << "≒";

			renderUI();
		}

		/*gotoxy(4, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
}

int map::store()
{
	system("cls");

	int key;
	int x = 32;
	int y = 17;

	m_shop->renderShop();

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (y == 1 || (x >= 20 && x <= 30 && y == 10) || (x >= 46 && x <= 66 && y == 8) || (x >= 46 && x <= 66 && y == 14)) continue;

				setcolor(2, 2);
				gotoxy(x, y);
				cout << "﹥";
				y--;
				break;
			case DOWN:
				if ((x >= 30 && x <= 32 && y == 17)) return 0;

				if (y == 17 || (y == 10 && x >= 46 && x <= 66) || (y == 4 && x >= 46 && x <= 66)) continue;

				setcolor(2, 2);
				gotoxy(x, y);
				cout << "﹥";
				y++;
				break;
			case LEFT:
				if (x == 20 || (x == 32 && y >= 1 && y <= 9)) continue;

				setcolor(2, 2);
				gotoxy(x, y);
				cout << "﹥";
				x -= 2;
				break;
			case RIGHT:
				if (x == 66 || (x == 44 && y >= 5 && y <= 7) || (x == 44 && y >= 11 && y <= 13)) continue;

				setcolor(2, 2);
				gotoxy(x, y);
				cout << "﹥";
				x += 2;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			if (x == 32 && y == 6)
			{
				int select = 0;
				bool buy = false;
				bool sell = false;

				gotoxy(10, 1);
				cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
				for (int i = 2; i < 7; i++)
				{
					gotoxy(10, i);
					cout << "早";
					gotoxy(38, i);
					cout << "早";
				}
				gotoxy(10, 7);
				cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

				for (int i = 12; i < 37; i++)
				{
					for (int j = 2; j < 7; j++)
					{
						gotoxy( i, j);
						setcolor(15, 15);
						cout << "≒";
					}
				}
				setcolor(0, 15);
				gotoxy(18, 2);
				cout << "餌楝 螃棻";
				gotoxy(18, 4);
				cout << "つ楝 螃棻";
				gotoxy(18, 6);
				cout << "殘晦";

				while (true)
				{
					setcolor(0, 15);
					gotoxy(14, 2 + (select * 2));
					cout << "Ⅱ";

					key = _getch();
					//cout << key << endl;
					if (key == 224)
					{
						key = _getch();
						switch (key)
						{
						case UP:
							setcolor(15, 15);
							gotoxy(14, 2 + (select * 2));
							cout << "﹥";
							select--;
							if (select < 0) select = 2;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(14, 2 + (select * 2));
							cout << "﹥";
							select++;
							if (select > 2) select = 0;
							break;
						}//switch(key)
					}//if(key)
					else if (key == 122)
					{
						if (select == 0)
						{
							buy = true;
							break;
						}
						else if (select == 1)
						{
							sell = true;
							break;
						}
						else if (select == 2)
						{
							break;
						}
					}
				}

				if(sell) m_player->sellItem();

				while (buy)
				{
					system("cls");
					tagItemInfo temp;
					renderUI();
					temp = m_shop->buyItem(m_player->m_money);

					if (temp.itemKind == ITEM_EMPTY)
					{
						break;
					}

					m_player->addItem(temp);	
				}

				system("cls");
				m_shop->renderShop();
				renderUI();
				textclear();
			}
		}
		else if (key == 120)
		{
			//textclear();
			locationMenu(menu());
			system("cls");
			m_shop->renderShop();
			renderUI();
		}

		/*gotoxy(4, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
}

int map::forest()
{
	system("cls");

	int key;
	int x = 76;
	int y = 9;

	for (int i = 10; i < 77; i++)
	{
		for (int j = 1; j < 18; j++)
		{
			gotoxy(i, j);
			setcolor(2, 2);
			cout << "仃";
		}
	}

	for (int i = 62; i < 77; i++)
	{
		for (int j = 8; j < 11; j++)
		{
			gotoxy(i, j);
			setcolor(7, 7);
			cout << "仃";
		}
	}

	for (int i = 0; i < 16; i++)
	{
		for (int j = 12; j < 18; j++)
		{
			gotoxy(i * 2 + 46, j);
			setcolor(10, 2);
			cout << "～";
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 6; j < 18; j++)
		{
			gotoxy(i * 2 + 10, j);
			setcolor(10, 2);
			cout << "～";
		}
	}

	renderUI();

	while (true)
	{
		renderPlayer(x, y);

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (y == 1) continue;

				gotoxy(x, y);
				( (x >= 62 && x <= 76 && y <= 10 && y >= 8) ) ? setcolor(7, 7) : setcolor(2, 2);
				if(	x >= 46 && x <= 76 && y >= 12 && y <= 17 || (x >= 10 && x <= 24 && y <= 17 && y >= 6)) setcolor(10, 2);
				cout << "～";
				y--;
				break;
			case DOWN:
				if (y == 17) continue;

				gotoxy(x, y);
				(x >= 62 && x <= 76 && y <= 10 && y >= 8) ? setcolor(7, 7) : setcolor(2, 2);
				if (x >= 46 && x <= 76 && y >= 12 && y <= 17 || (x >= 10 && x <= 24 && y <= 17 && y >= 6)) setcolor(10, 2);
				cout << "～";
				y++;
				break;
			case LEFT:
				if (x == 10) continue;

				gotoxy(x, y);
				(x >= 62 && x <= 76 && y <= 10 && y >= 8) ? setcolor(7, 7) : setcolor(2, 2);
				if (x >= 46 && x <= 76 && y >= 12 && y <= 17 || (x >= 10 && x <= 24 && y <= 17 && y >= 6)) setcolor(10, 2);
				cout << "～";
				x -= 2;
				break;
			case RIGHT:
				if (x == 76 && y >= 8 && y <= 10) return 0;

				if (x == 76) continue;

				gotoxy(x, y);
				(x >= 62 && x <= 76 && y <= 10 && y >= 8) ? setcolor(7, 7) : setcolor(2, 2);
				if (x >= 46 && x <= 76 && y >= 12 && y <= 17 || (x >= 10 && x <= 24 && y <= 17 && y >= 6)) setcolor(10, 2);
				cout << "～";
				x += 2;
				break;
			}//switch(key)

			if (x >= 46 && x <= 76 && y >= 12 && y <= 17 || (x >= 10 && x <= 24 && y <= 17 && y >= 6))
			{
				int num;
				int random = rand() % 10;

				if (random < 2)
				{
					num = battle();
					system("cls");
					//system("mode con:cols=120 lines=30");
					switch (num)
					{
					case 0:
						x = 76;
						y = 9;
						break;
					case 1:
						break;
					case 2:
						break;
					}

					for (int i = 10; i < 77; i++)
					{
						for (int j = 1; j < 18; j++)
						{
							gotoxy(i, j);
							setcolor(2, 2);
							cout << "仃";
						}
					}
					for (int i = 62; i < 77; i++)
					{
						for (int j = 8; j < 11; j++)
						{
							gotoxy(i, j);
							setcolor(7, 7);
							cout << "仃";
						}
					}
					for (int i = 0; i < 16; i++)
					{
						for (int j = 12; j < 18; j++)
						{
							gotoxy(i * 2 + 46, j);
							setcolor(10, 2);
							cout << "～";
						}
					}
					for (int i = 0; i < 8; i++)
					{
						for (int j = 6; j < 18; j++)
						{
							gotoxy(i * 2 + 10, j);
							setcolor(10, 2);
							cout << "～";
						}
					}
					renderUI();
				}
			}
		}//if(key)
		else if (key == 122)
		{
		}
		else if (key == 120)
		{
			locationMenu(menu());
			system("cls");
			for (int i = 10; i < 77; i++)
			{
				for (int j = 1; j < 18; j++)
				{
					gotoxy(i, j);
					setcolor(2, 2);
					cout << "仃";
				}
			}

			for (int i = 62; i < 77; i++)
			{
				for (int j = 8; j < 11; j++)
				{
					gotoxy(i, j);
					setcolor(7, 7);
					cout << "仃";
				}
			}

			for (int i = 0; i < 16; i++)
			{
				for (int j = 12; j < 18; j++)
				{
					gotoxy(i * 2 + 46, j);
					setcolor(10, 2);
					cout << "～";
				}
			}

			for (int i = 0; i < 8; i++)
			{
				for (int j = 6; j < 18; j++)
				{
					gotoxy(i * 2 + 10, j);
					setcolor(10, 2);
					cout << "～";
				}
			}

			renderUI();
		}

	/*	gotoxy(4, 22);
		setcolor(0, 15);
		cout << "X : " << x << " Y : " << y;*/
	}
}

void map::renderPlayer(int playerX, int playerY)
{
	setcolor(9, 12);
	gotoxy(playerX, playerY);
	cout << "﹥";
	setcolor(0, 15);
}

void map::renderUI()
{
	setcolor(0, 15);

	gotoxy(0, 20);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	gotoxy(0, 21);
	cout << "早";
	gotoxy(86, 21);
	cout << "早";
	gotoxy(0, 22);
	cout << "早";
	gotoxy(86, 22);
	cout << "早";
	gotoxy(0, 23);
	cout << "早";
	gotoxy(86, 23);
	cout << "早";
	gotoxy(0, 24);
	cout << "早";
	gotoxy(86, 24);
	cout << "早";
	gotoxy(0, 25);
	cout << "早";
	gotoxy(86, 25);
	cout << "早";
	gotoxy(0, 26);
	cout << "早";
	gotoxy(86, 26);
	cout << "早";
	gotoxy(0, 27);
	cout << "早";
	gotoxy(86, 27);
	cout << "早";
	gotoxy(0, 28);
	cout << "早";
	gotoxy(86, 28);
	cout << "早";
	gotoxy(0, 29);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	//詭景
	gotoxy(89, 0);
	cout << "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	for (int i = 1; i < 29; i++)
	{
		gotoxy(89, i);
		cout << "早";
		gotoxy(117, i);
		cout << "早";
	}
	gotoxy(89, 29);
	cout << "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭";

	gotoxy(95, 2);
	cout << "ん鰍跨";
	gotoxy(95, 4);
	cout << "陛寞";
	gotoxy(95, 6);
	cout << "殘晦";
	gotoxy(95, 8);
	cout << "謙猿";

	gotoxy(4, 22);
}

int map::battle()
{
	system("cls");
	system("mode con:cols=160 lines=40");
	system("color f0");

	int select = 0;
	int key;

	m_battle->battleScene();

	int selectPokemon = 0;

	tagMonster enemyPokemon = m_pokemon->rendommonster();
	//tagMonster enemyPokemon = m_pokemon->getPokemon(3);

	m_player->m_viMyMonster = m_player->m_vMyMonster.begin() + selectPokemon;

	pRender->render(4, 18, m_player->m_viMyMonster->number);
	pRender->render(100, 1, enemyPokemon.number);

	setcolor(0, 15);
	gotoxy(64, 25);
	cout << m_player->m_viMyMonster->name;
	gotoxy(64, 27);
	cout << "LV : " << m_player->m_viMyMonster->lv;
	gotoxy(64, 29);
	cout << "MAXHP : " <<m_player->m_viMyMonster->maxHp;
	gotoxy(64, 31);
	cout << "HP : " <<m_player->m_viMyMonster->hp;

	gotoxy(76, 5);
	cout << enemyPokemon.name;
	gotoxy(76, 7);
	cout << "LV : " << enemyPokemon.lv;
	gotoxy(76, 9);
	cout << "MAXHP : " << enemyPokemon.maxHp;
	gotoxy(76, 11);
	cout << "HP : " << enemyPokemon.hp;

	gotoxy(11, 5);
	cout << "諄辦棻";
	gotoxy(11, 7);
	cout << "陛寞";
	gotoxy(11, 9);
	cout << "ん鰍跨";
	gotoxy(11, 11);
	cout << "紫蜂陛棻";

	gotoxy(90, 25);
	cout << "撿儅 " << enemyPokemon.name << "檜(陛) 轎⑷ж艘棻";
	gotoxy(90, 27);
	cout << "鼠歙擊 й梱?";
	//Sleep(1000);

	while (true)
	{
		setcolor(0, 15);
		gotoxy(7, 5 + (select * 2));
		cout << "Ⅱ";

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				setcolor(15, 15);
				gotoxy(7, 5 + (select * 2));
				cout << "﹥";
				select--;
				if (select < 0) select = 3;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(7, 5 + (select * 2));
				cout << "﹥";
				select++;
				if (select > 3) select = 0;
				break;
			}//switch(key)
		}//if(key)
		else if (key == 122)
		{
			if (select == 0)
			{
				for (int i = 6; i < 29; i++)
				{
					for (int j = 4; j < 13; j++)
					{
						gotoxy(i, j);
						setcolor(15, 15);
						cout << "～";
					}
				}

				int count = 0;

				setcolor(0, 15);

				gotoxy(11, 5);
				if (m_player->m_viMyMonster->skill1.name != "-")
				{
					cout << m_player->m_viMyMonster->skill1.name;
					count++;
				}
				gotoxy(11, 7);
				if (m_player->m_viMyMonster->skill2.name != "-")
				{
					cout << m_player->m_viMyMonster->skill2.name;
					count++;
				}
				gotoxy(11, 9);
				if (m_player->m_viMyMonster->skill3.name != "-")
				{
					cout << m_player->m_viMyMonster->skill3.name;
					count++;
				}
				gotoxy(11, 11);
				if (m_player->m_viMyMonster->skill4.name != "-")
				{
					cout << m_player->m_viMyMonster->skill4.name;
					count++;
				}

				while(true)
				{
					setcolor(0, 15);
					gotoxy(7, 5 + (select * 2));
					cout << "Ⅱ";

					key = _getch();
					//cout << key << endl;
					if (key == 224)
					{
						key = _getch();
						switch (key)
						{
						case UP:
							setcolor(15, 15);
							gotoxy(7, 5 + (select * 2));
							cout << "﹥";
							select--;
							if (select < 0) select = count - 1;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(7, 5 + (select * 2));
							cout << "﹥";
							select++;
							if (select > count - 1) select = 0;
							break;
						}//switch(key)
					}//if(key)
					if (key == 122)
					{
						bool turnplayer = false;

						tagSkill nowskill;

						if (select == 0) nowskill = m_player->m_viMyMonster->skill1;
						if (select == 1) nowskill = m_player->m_viMyMonster->skill2;
						if (select == 2) nowskill = m_player->m_viMyMonster->skill3;
						if (select == 3) nowskill = m_player->m_viMyMonster->skill4;

						select = 0;

						if (m_player->m_viMyMonster->dex >= enemyPokemon.dex) turnplayer = true;

						if (turnplayer)
						{
							int damage;
							float defence;
							gotoxy(90, 25);
							cout << m_player->m_viMyMonster->name << "擎(朝) " << nowskill.name << "擊(蒂) 衛瞪ж艘棻";
							damage = m_player->m_viMyMonster->atk * nowskill.power;
							defence = enemyPokemon.def / 2;
							damage -= defence;
							if (damage < 0) damage = 0;
							enemyPokemon.hp -= damage;

							if (enemyPokemon.hp <= 0)
							{
								gotoxy(90, 27);
								cout << "撿儅 " << enemyPokemon.name << "擎(朝) 噙楝螺棻";
								gotoxy(90, 29);
								cout << m_player->m_viMyMonster->name << "擎(朝) 溯漣檜 1螢塭 ";
								m_player->lvUp( *m_player->m_viMyMonster );
								cout << m_player->m_viMyMonster->lv << "檜 腎歷蝗棲棻";
								Sleep(2000);
								return 1;
							}

							int randnum = rand() % 2;
							if (randnum == 0)
							{
								gotoxy(90, 27);
								cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill1.name << "擊(蒂) 衛瞪ж艘棻";
								damage = enemyPokemon.atk * enemyPokemon.skill1.power;
								defence = m_player->m_viMyMonster->def / 2;
								damage -= defence;
								if (damage < 0) damage = 0;
								m_player->m_viMyMonster->hp -= damage;
							}
							else if (randnum == 1)
							{
								gotoxy(90, 27);
								cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill2.name << "擊(蒂) 衛瞪ж艘棻";
								damage = enemyPokemon.atk * enemyPokemon.skill2.power;
								defence = m_player->m_viMyMonster->def / 2;
								damage -= defence;
								if (damage < 0) damage = 0;
								m_player->m_viMyMonster->hp -= damage;
							}

							if (m_player->m_viMyMonster->hp <= 0)
							{
								m_player->m_viMyMonster->hp = 0;

								/*for (m_player->m_viMyMonster = m_player->m_vMyMonster.begin(); m_player->m_viMyMonster != m_player->m_vMyMonster.end(); m_player->m_viMyMonster++)
								{
									if (m_player->m_viMyMonster->hp >= 0)
										break;
								}

								if (m_player->m_viMyMonster != m_player->m_vMyMonster.end()) break;*/

								system("cls");
								gotoxy(80, 20);
								cout << "換擅檜 梭梭п螺棻";
								Sleep(2000);
								return 0;
							}

							Sleep(1000);
							
							system("cls");

							m_battle->battleScene();

							pRender->render(4, 18, m_player->m_viMyMonster->number);
							pRender->render(100, 1, enemyPokemon.number);

							setcolor(0, 15);
							gotoxy(64, 25);
							cout << m_player->m_viMyMonster->name;
							gotoxy(64, 27);
							cout << "LV : " << m_player->m_viMyMonster->lv;
							gotoxy(64, 29);
							cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
							gotoxy(64, 31);
							cout << "HP : " << m_player->m_viMyMonster->hp;

							gotoxy(76, 5);
							cout << enemyPokemon.name;
							gotoxy(76, 7);
							cout << "LV : " << enemyPokemon.lv;
							gotoxy(76, 9);
							cout << "MAXHP : " << enemyPokemon.maxHp;
							gotoxy(76, 11);
							cout << "HP : " << enemyPokemon.hp;

							gotoxy(11, 5);
							cout << "諄辦棻";
							gotoxy(11, 7);
							cout << "陛寞";
							gotoxy(11, 9);
							cout << "ん鰍跨";
							gotoxy(11, 11);
							cout << "紫蜂陛棻";

							break;
						}
						else
						{
							int damage;
							float defence;
							int randnum = rand() % 2;
							if (randnum == 0)
							{
								gotoxy(90, 25);
								cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill1.name << "擊(蒂) 衛瞪ж艘棻";
								damage = enemyPokemon.atk * enemyPokemon.skill1.power;
								defence = m_player->m_viMyMonster->def / 2;
								damage -= defence;
								if (damage < 0) damage = 0;
								m_player->m_viMyMonster->hp -= damage;
							}
							else if (randnum == 1)
							{
								gotoxy(90, 25);
								cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill2.name << "擊(蒂) 衛瞪ж艘棻";
								damage = enemyPokemon.atk * enemyPokemon.skill2.power;
								defence = m_player->m_viMyMonster->def / 2;
								damage -= defence;
								if (damage < 0) damage = 0;
								m_player->m_viMyMonster->hp -= damage;
							}

							if (m_player->m_viMyMonster->hp <= 0)
							{
								m_player->m_viMyMonster->hp = 0;

								for (m_player->m_viMyMonster = m_player->m_vMyMonster.begin(); m_player->m_viMyMonster != m_player->m_vMyMonster.end(); m_player->m_viMyMonster++)
								{
									if (m_player->m_viMyMonster->hp >= 0)
										break;
								}

								if(m_player->m_viMyMonster != m_player->m_vMyMonster.end()) break;
								
								system("cls");
								gotoxy(80, 20);
								cout << "換擅檜 梭梭п螺棻";
								Sleep(2000);
								return 0;
							}

							gotoxy(90, 27);
							cout << m_player->m_viMyMonster->name << "擎(朝) " << nowskill.name << "擊(蒂) 衛瞪ж艘棻";
							damage = m_player->m_viMyMonster->atk * nowskill.power;
							defence = enemyPokemon.def / 2;
							damage -= defence;
							if (damage < 0) damage = 0;
							enemyPokemon.hp -= damage;

							if (enemyPokemon.hp <= 0)
							{
								gotoxy(90, 29);
								cout << "撿儅 " << enemyPokemon.name << "擎(朝) 噙楝螺棻";
								gotoxy(90, 31);
								cout << m_player->m_viMyMonster->name << "擎(朝) 溯漣檜 1螢塭 ";
								m_player->lvUp(*m_player->m_viMyMonster);
								cout << m_player->m_viMyMonster->lv << "檜 腎歷蝗棲棻";
								Sleep(2000);
								return 1;
							}

							Sleep(1000);

							system("cls");

							m_battle->battleScene();

							pRender->render(4, 18, m_player->m_viMyMonster->number);
							pRender->render(100, 1, enemyPokemon.number);

							setcolor(0, 15);
							gotoxy(64, 25);
							cout << m_player->m_viMyMonster->name;
							gotoxy(64, 27);
							cout << "LV : " << m_player->m_viMyMonster->lv;
							gotoxy(64, 29);
							cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
							gotoxy(64, 31);
							cout << "HP : " << m_player->m_viMyMonster->hp;

							gotoxy(76, 5);
							cout << enemyPokemon.name;
							gotoxy(76, 7);
							cout << "LV : " << enemyPokemon.lv;
							gotoxy(76, 9);
							cout << "MAXHP : " << enemyPokemon.maxHp;
							gotoxy(76, 11);
							cout << "HP : " << enemyPokemon.hp;

							gotoxy(11, 5);
							cout << "諄辦棻";
							gotoxy(11, 7);
							cout << "陛寞";
							gotoxy(11, 9);
							cout << "ん鰍跨";
							gotoxy(11, 11);
							cout << "紫蜂陛棻";

							break;
						}
					}
				}//while(晦獎摹鷗)
			}//if(諄辦棻)
			else if (select == 1)
			{
				int select = 0;
				int key;

				m_player->showMyBag();
				m_player->m_viInventory = m_player->m_vInventory.begin() + select;

				while (true)
				{
					setcolor(0, 15);
					gotoxy(21, 4 + (select * 2));
					cout << "Ⅱ";

					key = _getch();
					//cout << key << endl;
					if (key == 224)
					{
						key = _getch();
						switch (key)
						{
						case UP:
							setcolor(15, 15);
							gotoxy(21, 4 + (select * 2));
							cout << "﹥";
							select--;
							if (select < 0) select = m_player->m_vInventory.size() - 1;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(21, 4 + (select * 2));
							cout << "﹥";
							select++;
							if (select > m_player->m_vInventory.size() - 1) select = 0;
							break;
						}//switch(key)

						//textclear();

						m_player->m_viInventory = m_player->m_vInventory.begin() + select;
						/*setcolor(0, 15);
						gotoxy(4, 22);
						cout << m_player->m_viInventory->description;*/
					}//if(key)
					else if (key == 122)
					{
						if (m_player->m_viInventory->itemKind == ITEM_POSION)
						{
							select = 0;
							m_player->showMyMonster();

							m_player->m_viMyMonster = m_player->m_vMyMonster.begin();

							while (true)
							{
								setcolor(0, 15);
								gotoxy(21, 4 + (select * 2));
								cout << "Ⅱ";

								key = _getch();
								//cout << key << endl;
								if (key == 224)
								{
									key = _getch();
									switch (key)
									{
									case UP:
										setcolor(15, 15);
										gotoxy(21, 4 + (select * 2));
										cout << "﹥";
										select--;
										if (select < 0) select = m_player->m_vMyMonster.size() - 1;
										break;
									case DOWN:
										setcolor(15, 15);
										gotoxy(21, 4 + (select * 2));
										cout << "﹥";
										select++;
										if (select > m_player->m_vMyMonster.size() - 1) select = 0;
										break;
									}//switch(key)

									m_player->m_viMyMonster = m_player->m_vMyMonster.begin() + select;
								}//if(key)
								else if (key == 122)
								{
									m_player->m_viMyMonster->hp += m_player->m_viInventory->atk;
									if (m_player->m_viMyMonster->hp > m_player->m_viMyMonster->maxHp) m_player->m_viMyMonster->hp = m_player->m_viMyMonster->maxHp;
									m_player->m_viInventory->count--;

									system("cls");

									m_battle->battleScene();

									pRender->render(4, 18, m_player->m_viMyMonster->number);
									pRender->render(100, 1, enemyPokemon.number);

									setcolor(0, 15);
									gotoxy(64, 25);
									cout << m_player->m_viMyMonster->name;
									gotoxy(64, 27);
									cout << "LV : " << m_player->m_viMyMonster->lv;
									gotoxy(64, 29);
									cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
									gotoxy(64, 31);
									cout << "HP : " << m_player->m_viMyMonster->hp;

									gotoxy(76, 5);
									cout << enemyPokemon.name;
									gotoxy(76, 7);
									cout << "LV : " << enemyPokemon.lv;
									gotoxy(76, 9);
									cout << "MAXHP : " << enemyPokemon.maxHp;
									gotoxy(76, 11);
									cout << "HP : " << enemyPokemon.hp;

									gotoxy(11, 5);
									cout << "諄辦棻";
									gotoxy(11, 7);
									cout << "陛寞";
									gotoxy(11, 9);
									cout << "ん鰍跨";
									gotoxy(11, 11);
									cout << "紫蜂陛棻";

									int damage;
									float defence;
									int randnum = rand() % 2;
									if (randnum == 0)
									{
										gotoxy(90, 25);
										cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill1.name << "擊(蒂) 衛瞪ж艘棻";
										damage = enemyPokemon.atk * enemyPokemon.skill1.power;
										defence = m_player->m_viMyMonster->def / 2;
										damage -= defence;
										if (damage < 0) damage = 0;
										m_player->m_viMyMonster->hp -= damage;
									}
									else if (randnum == 1)
									{
										gotoxy(90, 25);
										cout << enemyPokemon.name << "擎(朝) " << enemyPokemon.skill2.name << "擊(蒂) 衛瞪ж艘棻";
										damage = enemyPokemon.atk * enemyPokemon.skill2.power;
										defence = m_player->m_viMyMonster->def / 2;
										damage -= defence;
										if (damage < 0) damage = 0;
										m_player->m_viMyMonster->hp -= damage;
									}

									if (m_player->m_viMyMonster->hp <= 0)
									{
										m_player->m_viMyMonster->hp = 0;

										for (m_player->m_viMyMonster = m_player->m_vMyMonster.begin(); m_player->m_viMyMonster != m_player->m_vMyMonster.end(); m_player->m_viMyMonster++)
										{
											if (m_player->m_viMyMonster->hp >= 0)
												break;
										}

										if (m_player->m_viMyMonster != m_player->m_vMyMonster.end()) break;

										system("cls");
										gotoxy(80, 20);
										cout << "換擅檜 梭梭п螺棻";
										Sleep(2000);
										return 0;
									}

									break;
								}
								else if (key == 120)
								{
									system("cls");

									m_battle->battleScene();

									pRender->render(4, 18, m_player->m_viMyMonster->number);
									pRender->render(100, 1, enemyPokemon.number);

									setcolor(0, 15);
									gotoxy(64, 25);
									cout << m_player->m_viMyMonster->name;
									gotoxy(64, 27);
									cout << "LV : " << m_player->m_viMyMonster->lv;
									gotoxy(64, 29);
									cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
									gotoxy(64, 31);
									cout << "HP : " << m_player->m_viMyMonster->hp;

									gotoxy(76, 5);
									cout << enemyPokemon.name;
									gotoxy(76, 7);
									cout << "LV : " << enemyPokemon.lv;
									gotoxy(76, 9);
									cout << "MAXHP : " << enemyPokemon.maxHp;
									gotoxy(76, 11);
									cout << "HP : " << enemyPokemon.hp;

									gotoxy(11, 5);
									cout << "諄辦棻";
									gotoxy(11, 7);
									cout << "陛寞";
									gotoxy(11, 9);
									cout << "ん鰍跨";
									gotoxy(11, 11);
									cout << "紫蜂陛棻";

									if (m_player->m_viInventory->count <= 0)
										m_player->m_vInventory.erase(m_player->m_viInventory);

									break;
								}	
							}//while()
							break;
						}
						else if (m_player->m_viInventory->itemKind == ITEM_BALL)
						{
							gotoxy(90, 25);
							cout << m_player->m_viInventory->name << "擊(蒂) 餌辨ж罹" << enemyPokemon.name << "擊(蒂) ん�嘎狤晾懂炴�.";
							m_player->addMonster(enemyPokemon);

							Sleep(2000);

							m_player->m_viInventory->count--;

							if (m_player->m_viInventory->count <= 0)
								m_player->m_vInventory.erase(m_player->m_viInventory);

							return 1;
						}
						else
						{
							gotoxy(4, 22);
							setcolor(0, 15);
							cout << "檜夠縑憮 餌辨й熱 橈蝗棲棻";
						}
					}
					else if (key == 120)
						break;
				}//while(inventory)
			}
			else if (select == 2)
			{
				m_player->showMyMonster();

				m_player->m_viMyMonster = m_player->m_vMyMonster.begin() + selectPokemon;

				int save;
				save = selectPokemon;

				while (true)
				{
					setcolor(0, 15);
					gotoxy(21, 4 + (selectPokemon * 2));
					cout << "Ⅱ";

					key = _getch();
					//cout << key << endl;
					if (key == 224)
					{
						key = _getch();
						switch (key)
						{
						case UP:
							setcolor(15, 15);
							gotoxy(21, 4 + (selectPokemon * 2));
							cout << "﹥";
							selectPokemon--;
							if (selectPokemon < 0) selectPokemon = m_player->m_vMyMonster.size() - 1;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(21, 4 + (selectPokemon * 2));
							cout << "﹥";
							selectPokemon++;
							if (selectPokemon > m_player->m_vMyMonster.size() - 1) selectPokemon = 0;
							break;
						}//switch(key)
					}//if(key)
					else if (key == 122)
					{
						m_player->m_viMyMonster = m_player->m_vMyMonster.begin() + selectPokemon;

						system("cls");

						m_battle->battleScene();

						pRender->render(4, 18, m_player->m_viMyMonster->number);
						pRender->render(100, 1, enemyPokemon.number);

						setcolor(0, 15);
						gotoxy(64, 25);
						cout << m_player->m_viMyMonster->name;
						gotoxy(64, 27);
						cout << "LV : " << m_player->m_viMyMonster->lv;
						gotoxy(64, 29);
						cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
						gotoxy(64, 31);
						cout << "HP : " << m_player->m_viMyMonster->hp;

						gotoxy(76, 5);
						cout << enemyPokemon.name;
						gotoxy(76, 7);
						cout << "LV : " << enemyPokemon.lv;
						gotoxy(76, 9);
						cout << "MAXHP : " << enemyPokemon.maxHp;
						gotoxy(76, 11);
						cout << "HP : " << enemyPokemon.hp;

						gotoxy(11, 5);
						cout << "諄辦棻";
						gotoxy(11, 7);
						cout << "陛寞";
						gotoxy(11, 9);
						cout << "ん鰍跨";
						gotoxy(11, 11);
						cout << "紫蜂陛棻";

						break;
					}
					else if (key == 120)
					{
						selectPokemon = save;

						system("cls");

						m_battle->battleScene();

						pRender->render(4, 18, m_player->m_viMyMonster->number);
						pRender->render(100, 1, enemyPokemon.number);

						setcolor(0, 15);
						gotoxy(64, 25);
						cout << m_player->m_viMyMonster->name;
						gotoxy(64, 27);
						cout << "LV : " << m_player->m_viMyMonster->lv;
						gotoxy(64, 29);
						cout << "MAXHP : " << m_player->m_viMyMonster->maxHp;
						gotoxy(64, 31);
						cout << "HP : " << m_player->m_viMyMonster->hp;

						gotoxy(76, 5);
						cout << enemyPokemon.name;
						gotoxy(76, 7);
						cout << "LV : " << enemyPokemon.lv;
						gotoxy(76, 9);
						cout << "MAXHP : " << enemyPokemon.maxHp;
						gotoxy(76, 11);
						cout << "HP : " << enemyPokemon.hp;

						gotoxy(11, 5);
						cout << "諄辦棻";
						gotoxy(11, 7);
						cout << "陛寞";
						gotoxy(11, 9);
						cout << "ん鰍跨";
						gotoxy(11, 11);
						cout << "紫蜂陛棻";

						break;
					}
				}
			}
			else if (select == 3)
			{
				gotoxy(90, 29);
				cout << "鼠餌�� 紫蜂蟻棻";
				Sleep(2000);
				break;
			}
		}
	}//while(ч翕摹鷗)
}

void map::release()
{
	delete m_battle;
	delete m_player;
	delete m_pokemon;
}

void map::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void map::setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void map::textclear()
{
	for (int i = 2; i < 85; i++)
	{
		for (int j = 21; j < 29; j++)
		{
			gotoxy(i, j);
			setcolor(15, 15);
			cout << "仃";
		}
	}
}

void map::test()
{
	
}
