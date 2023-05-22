#include "character.h"



character::character()
{
	m_money = 50000;
}


character::~character()
{
}

void character::showMyMonster()
{
	setcolor(0, 15);
	gotoxy(16, 2);
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
	for (int i = 3; i < 17; i++)
	{
		gotoxy(16, i);
		cout << "┃";
		gotoxy(70, i);
		cout << "┃";
	}
	gotoxy(16, 17);
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

	for (int i = 18; i < 69; i++)
	{
		for (int j = 3; j < 17; j++)
		{
			gotoxy(i, j);
			setcolor(15, 15);
			cout << "ㅁ";
		}
	}
	setcolor(0, 15);

	m_viMyMonster = m_vMyMonster.begin();
	for (int i = 0; i < m_vMyMonster.size(); i++)
	{
		gotoxy(25, i * 2 + 4);
		cout << m_viMyMonster->name;

		gotoxy(38, i * 2 + 4);
		printf("Lv %2d", m_viMyMonster->lv);

		gotoxy(50, i * 2 + 4);
		cout << "HP : " << m_viMyMonster->hp << "  /  " << m_viMyMonster->maxHp;

		m_viMyMonster++;
	}
}

void character::showPokemonInfo()
{
	int select = 0;
	int key;

	showMyMonster();

	m_viMyMonster = m_vMyMonster.begin() + select;

	while (true)
	{
		setcolor(0, 15);
		gotoxy(21, 4 + (select * 2));
		cout << "▶";

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
				cout << "■";
				select--;
				if (select < 0) select = m_vMyMonster.size() - 1;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(21, 4 + (select * 2));
				cout << "■";
				select++;
				if (select > m_vMyMonster.size() - 1) select = 0;
				break;
			}//switch(key)

			m_viMyMonster = m_vMyMonster.begin() + select;
		}//if(key)
		else if (key == 122)
		{
			setcolor(0, 15);
			gotoxy(16, 2);
			cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
			for (int i = 3; i < 17; i++)
			{
				gotoxy(16, i);
				cout << "┃";
				gotoxy(70, i);
				cout << "┃";
			}
			gotoxy(16, 17);
			cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

			for (int i = 18; i < 69; i++)
			{
				for (int j = 3; j < 17; j++)
				{
					gotoxy(i, j);
					setcolor(15, 15);
					cout << "ㅁ";
				}
			}
			setcolor(0, 15);

			gotoxy(25, 4);
			cout << m_viMyMonster->name;
			gotoxy(38, 4);
			printf("Lv %2d", m_viMyMonster->lv);
			gotoxy(50, 4);
			cout << "HP : " << m_viMyMonster->hp << "  /  " << m_viMyMonster->maxHp;
			gotoxy(25, 5);
			cout << "공격 : " << m_viMyMonster->atk;
			gotoxy(25, 6);
			cout << "방어 : " << m_viMyMonster->def;
			gotoxy(25, 7);
			cout << "민첩 : " << m_viMyMonster->dex;
			gotoxy(25, 9);
			cout << "기술1 : " << m_viMyMonster->skill1.name;
			gotoxy(25, 10);
			cout << "기술2 : " << m_viMyMonster->skill2.name;
			gotoxy(25, 11);
			cout << "기술3 : " << m_viMyMonster->skill3.name;
			gotoxy(25, 12);
			cout << "기술4 : " << m_viMyMonster->skill4.name;
			gotoxy(25, 14);
			cout << "지닌물건 : " << m_viMyMonster->haveitem.name;

			key = _getch();
			while (true)
			{
				if (key == 122)
				{
					if (m_viMyMonster->haveitem.name != "-")
					{
						setcolor(0, 15);
						gotoxy(52, 14);
						cout << "┏━━━━━━━━━━━┓";
						for (int i = 15; i < 17; i++)
						{
							gotoxy(52, i);
							cout << "┃";
							gotoxy(64, i);
							cout << "┃";
						}
						gotoxy(52, 17);
						cout << "┗━━━━━━━━━━━┛";
						for (int i = 54; i < 63; i++)
						{
							for (int j = 15; j < 17; j++)
							{
								gotoxy(i, j);
								setcolor(15, 15);
								cout << "ㅁ";
							}
						}

						gotoxy(4, 22);
						setcolor(0, 15);
						cout << "지니고 있는 아이템을 가져옵니까?";

						setcolor(0, 15);
						gotoxy(56, 15);
						cout << "네";
						gotoxy(56, 16);
						cout << "아니요";
						select = 0;
						while (true)
						{
							setcolor(0, 15);
							gotoxy(54, 15 + select);
							cout << "▶";

							key = _getch();
							//cout << key << endl;
							if (key == 224)
							{
								key = _getch();
								switch (key)
								{
								case UP:
									setcolor(15, 15);
									gotoxy(54, 15 + select);
									cout << "■";
									select--;
									if (select < 0) select = 1;
									break;
								case DOWN:
									setcolor(15, 15);
									gotoxy(54, 15 + select);
									cout << "■";
									select++;
									if (select > 1) select = 0;
									break;
								}//switch(key)
							}//if(key)
							if (key == 122)
							{
								if (select == 0)
								{
									m_viMyMonster->haveitem.count = 1;
									addItem(m_viMyMonster->haveitem);
									m_viMyMonster->haveitem.name = "-";

									m_viMyMonster->atk -= m_viMyMonster->haveitem.atk;
									m_viMyMonster->def -= m_viMyMonster->haveitem.def;
									m_viMyMonster->dex -= m_viMyMonster->haveitem.dex;
								}
								select = 0;

								showMyMonster();
								break;
							}
						}
					}//if (m_viMyMonster->haveitem.name != "-")

					showMyMonster();
					break;
				}
				else if (key == 120)
				{
					showMyMonster();
					break;
				}
			}//while(정보 보는창)

			m_viMyMonster = m_vMyMonster.begin();
		}//key(122)
		else if (key == 120)
			break;
	}//while()
}

void character::showMyBag()
{
	setcolor(0, 15);
	gotoxy(16, 2);
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
	for (int i = 3; i < 17; i++)
	{
		gotoxy(16, i);
		cout << "┃";
		gotoxy(70, i);
		cout << "┃";
	}
	gotoxy(16, 17);
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

	for (int i = 18; i < 69; i++)
	{
		for (int j = 3; j < 17; j++)
		{
			gotoxy(i, j);
			setcolor(15, 15);
			cout << "ㅁ";
		}
	}
	setcolor(0, 15);

	m_viInventory = m_vInventory.begin();
	for (int i = 0; i < m_vInventory.size(); i++)
	{
		gotoxy(25, i * 2 + 4);
		cout << m_viInventory->name;

		gotoxy(55, i * 2 + 4);
		printf("X %2d", m_viInventory->count);

		m_viInventory++;
	}

	gotoxy(16, 18);
	cout << "소지금 : " << m_money;
}

void character::useItem()
{
	int select = 0;
	int key;

	showMyBag();

	m_viInventory = m_vInventory.begin() + select;

	while (true)
	{
		setcolor(0, 15);
		gotoxy(21, 4 + (select * 2));
		cout << "▶";

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
				cout << "■";
				select--;
				if (select < 0) select = m_vInventory.size() - 1;
				break;
			case DOWN:
				setcolor(15, 15);
				gotoxy(21, 4 + (select * 2));
				cout << "■";
				select++;
				if (select > m_vInventory.size() - 1) select = 0;
				break;
			}//switch(key)

			textclear();

			m_viInventory = m_vInventory.begin() + select;
			setcolor(0, 15);
			gotoxy(4, 22);
			cout << m_viInventory->description;
		}//if(key)
		else if (key == 122)
		{
			if (m_viInventory->itemKind == ITEM_POSION)
			{
				select = 0;
				showMyMonster();
				m_viMyMonster = m_vMyMonster.begin();

				while (true)
				{
					setcolor(0, 15);
					gotoxy(21, 4 + (select * 2));
					cout << "▶";

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
							cout << "■";
							select--;
							if (select < 0) select = m_vMyMonster.size() - 1;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(21, 4 + (select * 2));
							cout << "■";
							select++;
							if (select > m_vMyMonster.size() - 1) select = 0;
							break;
						}//switch(key)

						m_viMyMonster = m_vMyMonster.begin() + select;
					}//if(key)
					else if (key == 122)
					{
						m_viMyMonster->hp += m_viInventory->atk;
						if (m_viMyMonster->hp > m_viMyMonster->maxHp) m_viMyMonster->hp = m_viMyMonster->maxHp;
						m_viInventory->count--;
						break;
					}
					else if (key == 120)
						break;
				}
			}
			else if (m_viInventory->itemKind == ITEM_AKSSESARI)
			{
				showMyMonster();
				select = 0;
				m_viMyMonster = m_vMyMonster.begin() + select;

				while (true)
				{
					setcolor(0, 15);
					gotoxy(21, 4 + (select * 2));
					cout << "▶";

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
							cout << "■";
							select--;
							if (select < 0) select = m_vMyMonster.size() - 1;
							break;
						case DOWN:
							setcolor(15, 15);
							gotoxy(21, 4 + (select * 2));
							cout << "■";
							select++;
							if (select > m_vMyMonster.size() - 1) select = 0;
							break;
						}//switch(key)

						m_viMyMonster = m_vMyMonster.begin() + select;
					}//if(key)
					else if (key == 122)
					{
						if (m_viMyMonster->haveitem.name == "-")
						{
							m_viMyMonster->haveitem = *m_viInventory;

							m_viMyMonster->atk += m_viMyMonster->haveitem.atk;
							m_viMyMonster->def += m_viMyMonster->haveitem.def;
							m_viMyMonster->dex += m_viMyMonster->haveitem.dex;

							m_viInventory->count--;
							break;
						}
						else
						{
							gotoxy(4, 22);
							setcolor(0, 15);
							cout << "이미 다른 아이템을 지니고 있습니다";
						}
					}
					else if (key == 120)
						break;
				}
			}
			else
			{
				gotoxy(4, 22);
				setcolor(0, 15);
				cout << "이곳에서 사용할수 없습니다";
			}

			if (m_viInventory->count <= 0)
				m_vInventory.erase(m_viInventory);
			showMyBag();
		}
		else if(key == 120)
			break;
	}
}

void character::addMonster(tagMonster monster)
{
	if (m_vMyMonster.size() <= 6)
	{
		m_vMyMonster.push_back(monster);
		/*gotoxy(4, 22);
		setcolor(0, 15);
		cout << "신난다! " << monster.name << "을(를) 잡았다";
		Sleep(1000);*/
	}
	else
	{
		gotoxy(4, 22);
		setcolor(0, 15);
		cout << "가지고있을 수 있는 포켓몬 수를 초과하여 잡은 포켓몬을 놓아줍니다.";
		Sleep(1000);
	}
}

void character::addItem(tagItemInfo item)
{
	bool fineItem = false;

	m_viInventory = m_vInventory.begin();
	for (m_viInventory; m_viInventory != m_vInventory.end(); m_viInventory++)
	{
		if (item.name == m_viInventory->name)
		{
			m_viInventory->count += item.count;
			fineItem = true;
			break;
		}
	}

	if (!fineItem)
		m_vInventory.push_back(item);

}


void character::sellItem()
{
	int key;
	int select = 0;

	system("cls");
	renderUI();

	showMyBag();
	
	m_viInventory = m_vInventory.begin() + select;

	while (true)
	{
		setcolor(0, 15);
		gotoxy(20, select * 2 + 4);
		cout << "▶";

		key = _getch();
		//cout << key << endl;
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case 72:
				gotoxy(20, select * 2 + 4);
				setcolor(15, 15);
				cout << "ㅁ";
				select--;
				if (select < 0) select = m_vInventory.size() - 1;
				break;
			case 80:
				gotoxy(20, select * 2 + 4);
				setcolor(15, 15);
				cout << "ㅁ";
				select++;
				if (select > m_vInventory.size() - 1) select = 0;
				break;
			}//switch(key)

			textclear();

			m_viInventory = m_vInventory.begin() + select;
			setcolor(0, 15);
			gotoxy(4, 22);
			cout << m_viInventory->description;
		}//if(key)
		if (key == 122)
		{
			int count = 1;

			textclear();
			setcolor(0, 15);
			gotoxy(4, 22);
			cout << "몇 개를 판매하시겠습니까?";

			gotoxy(30, 21);
			cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
			gotoxy(30, 22);
			cout << "┃";
			gotoxy(58, 22);
			cout << "┃";
			gotoxy(30, 23);
			cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

			gotoxy(33, 22);
			printf("X %2d", count);
			gotoxy(48, 22);
			printf("%8d원", (m_viInventory->price / 2)  * count);

			gotoxy(16, 18);
			cout << "소지금 : " << m_money;

			while (true)
			{
				key = _getch();
				//cout << key << endl;
				if (key == 224)
				{
					key = _getch();
					switch (key)
					{
					case 72:
						count++;
						if (count > m_viInventory->count) count = 1;
						break;
					case 80:
						count--;
						if (count < 1) count = m_viInventory->count;
						break;
					}//switch(key)

					gotoxy(33, 22);
					printf("X %2d", count);
					gotoxy(48, 22);
					printf("%8d원", (m_viInventory->price / 2) * count);
					gotoxy(0, 0);
				}
				else if (key == 122)
				{
					textclear();
					gotoxy(4, 22);
					setcolor(0, 15);
					cout << m_viInventory->name << "을(를) " << count << "개 판매하셨습니다";
					m_money += (m_viInventory->price / 2) * count;
					m_viInventory->count -= count;
					Sleep(1000);

					if (m_viInventory->count <= 0)
						m_vInventory.erase(m_viInventory);

					textclear();

					showMyBag();

					gotoxy(16, 18);
					cout << "소지금 : " << m_money;

					break;
				}//else if (122)
			}
		}
		else if (key == 120)
			break;
	}
}



void character::allHeal()
{
	m_viMyMonster = m_vMyMonster.begin();
	for (m_viMyMonster; m_viMyMonster != m_vMyMonster.end(); m_viMyMonster++)
	{
		m_viMyMonster->hp = m_viMyMonster->maxHp;
	}
}

void character::lvUp(tagMonster &monster)
{
	monster.lv += 1;
	monster.maxHp += 2;
	monster.hp += 2;
	monster.atk += 1;
	monster.def += 1;
	monster.dex += 1;

	if (monster.lv == 8)
	{
		tagSkill enber;
		enber.name = "불꽃세레";
		enber.power = 1.4;
		enber.downAtk = 0;
		enber.downdef = 0;
		enber.downdex = 0;
		enber.maxuse = 25;
		enber.use = 25;
		enber.type = TYPE_FIRE;

		monster.skill3 = enber;
	}
}

void character::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void character::setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void character::textclear()
{
	for (int i = 2; i < 85; i++)
	{
		for (int j = 21; j < 29; j++)
		{
			gotoxy(i, j);
			setcolor(15, 15);
			cout << "ㅁ";
		}
	}
}

void character::renderUI()
{
	setcolor(0, 15);

	gotoxy(0, 20);
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
	gotoxy(0, 21);
	cout << "┃";
	gotoxy(86, 21);
	cout << "┃";
	gotoxy(0, 22);
	cout << "┃";
	gotoxy(86, 22);
	cout << "┃";
	gotoxy(0, 23);
	cout << "┃";
	gotoxy(86, 23);
	cout << "┃";
	gotoxy(0, 24);
	cout << "┃";
	gotoxy(86, 24);
	cout << "┃";
	gotoxy(0, 25);
	cout << "┃";
	gotoxy(86, 25);
	cout << "┃";
	gotoxy(0, 26);
	cout << "┃";
	gotoxy(86, 26);
	cout << "┃";
	gotoxy(0, 27);
	cout << "┃";
	gotoxy(86, 27);
	cout << "┃";
	gotoxy(0, 28);
	cout << "┃";
	gotoxy(86, 28);
	cout << "┃";
	gotoxy(0, 29);
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

	//메뉴
	gotoxy(89, 0);
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
	for (int i = 1; i < 29; i++)
	{
		gotoxy(89, i);
		cout << "┃";
		gotoxy(117, i);
		cout << "┃";
	}
	gotoxy(89, 29);
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

	gotoxy(95, 2);
	cout << "포켓몬";
	gotoxy(95, 4);
	cout << "가방";
	gotoxy(95, 6);
	cout << "닫기";
	gotoxy(95, 8);
	cout << "종료";

	gotoxy(4, 22);
}
