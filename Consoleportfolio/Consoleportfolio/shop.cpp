#include "shop.h"



shop::shop()
{
}


shop::~shop()
{
}

void shop::itemSetup()
{
	//ITEM itemKind;			//����������
	//string name;			//������ �̸�
	//string description;		//������ ����
	//int attribute;			//������Ư��
	//int price;				//�����۰���
	//int count;				//������ ����

	tagItemInfo monsterball;
	monsterball.itemKind = ITEM_BALL;
	monsterball.name = "���ͺ�";
	monsterball.description = "���ϸ��� ������� ����";
	monsterball.atk = 0;
	monsterball.def = 0;
	monsterball.dex = 0;
	monsterball.price = 200;
	m_vItem.push_back(monsterball);

	tagItemInfo vulnerary;
	vulnerary.itemKind = ITEM_POSION;
	vulnerary.name = "��ó��";
	vulnerary.description = "ü���� 20 ȸ����Ų��";
	vulnerary.atk = 20;
	vulnerary.def = 0;
	vulnerary.dex = 0;
	vulnerary.price = 300;
	m_vItem.push_back(vulnerary);

	tagItemInfo speedUp;
	speedUp.itemKind = ITEM_AKSSESARI;
	speedUp.name = "���ǵ� ��";
	speedUp.description = "���ϰ� ���� �� ���ϸ��� �� �������ϴ�";
	speedUp.atk = 0;
	speedUp.def = 0;
	speedUp.dex = 5;
	speedUp.price = 500;
	m_vItem.push_back(speedUp);

	tagItemInfo powerUp;
	powerUp.itemKind = ITEM_AKSSESARI;
	powerUp.name = "�Ŀ� ��";
	powerUp.description = "���ϰ� ���� �� ���ϸ��� ���ݷ��� �������ϴ�";
	powerUp.atk = 5;
	powerUp.def = 0;
	powerUp.dex = 0;
	powerUp.price = 600;
	m_vItem.push_back(powerUp);

	tagItemInfo defenceUp;
	defenceUp.itemKind = ITEM_AKSSESARI;
	defenceUp.name = "���潺 ��";
	defenceUp.description = "���ϰ� ���� �� ���ϸ��� ������ �������ϴ�";
	defenceUp.atk = 0;
	defenceUp.def = 5;
	defenceUp.dex = 0;
	defenceUp.price = 450;
	m_vItem.push_back(defenceUp);
}

int shop::itemOutput(int num)
{
	return 0;
}

tagItemInfo shop::buyItem(int &gold)
{
	tagItemInfo buyitem;
	buyitem.itemKind = ITEM_EMPTY;
	m_viItem = m_vItem.begin();
	int select = 0;
	int key;

	setcolor(0, 15);

	gotoxy(10, 2);
	cout << "����" << endl;

	gotoxy(16, 2);
	cout << "��������������������������������������������������������������������������������������������������������������";
	for (int i = 3; i < 17; i++)
	{
		gotoxy(16, i);
		cout << "��";
		gotoxy(70, i);
		cout << "��";
	}
	gotoxy(16, 17);
	cout << "��������������������������������������������������������������������������������������������������������������";

	gotoxy(16, 18);
	cout << "������ : " << gold;

	setcolor(0, 15);

	for (int i = 0; i < m_vItem.size(); i++)
	{
		gotoxy(25, i * 2 + 4);
		cout << m_viItem->name;

		gotoxy(55, i * 2 + 4);
		cout << m_viItem->price << "��";

		m_viItem++;
	}

	m_viItem = m_vItem.begin() + select;
	setcolor(0, 15);
	gotoxy(4, 22);
	cout << m_viItem->description;

	while (true)
	{
		setcolor(0, 15);
		gotoxy(20, select * 2 + 4);
		cout << "��";

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
				cout << "��";
				select--;
				if (select < 0) select = m_vItem.size() - 1;
				break;
			case 80:
				gotoxy(20, select * 2 + 4);
				setcolor(15, 15);
				cout << "��";
				select++;
				if (select > m_vItem.size() - 1) select = 0;
				break;
			}//switch(key)

			textclear();

			m_viItem = m_vItem.begin() + select;
			setcolor(0, 15);
			gotoxy(4, 22);
			cout << m_viItem->description;
		}//if(key)
		if (key == 122)
		{
			int count = 1;

			textclear();
			setcolor(0, 15);
			gotoxy(4, 22);
			cout << "�� ���� �����Ͻðڽ��ϱ�?";

			gotoxy(30, 21);
			cout << "����������������������������������������������������������";
			gotoxy(30, 22);
			cout << "��";
			gotoxy(58, 22);
			cout << "��";
			gotoxy(30, 23);
			cout << "����������������������������������������������������������";

			gotoxy(33, 22);
			printf("X %2d", count);
			gotoxy(48, 22);
			printf("%8d��", m_viItem->price * count);

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
						if (count > 99) count = 1;
						break;
					case 80:
						count--;
						if (count < 1) count = 99;
						break;
					}//switch(key)

					gotoxy(33, 22);
					printf("X %2d",count);
					gotoxy(48, 22);
					printf("%8d��", m_viItem->price * count);
					gotoxy(0, 0);
				}
				else if (key == 122)
				{
					if (m_viItem->price * count > gold)
					{
						textclear();
						gotoxy(4, 22);
						setcolor(0, 15);
						cout << "���� �����մϴ�!";
						Sleep(1000);
						textclear();
						break;
					}
					textclear();
					gotoxy(4, 22);
					setcolor(0, 15);
					cout << m_viItem->name << "��(��) " << count << "�� �����ϼ̽��ϴ�";
					gold -= m_viItem->price * count;
					buyitem = *m_viItem;
					buyitem.count = count;
					Sleep(1000);
					textclear();

					return buyitem;
				}//else if (122)
				else if (key == 120)
				{
					textclear();
					break;
				}
			}//while (true)
		}//if(key 122)
		else if (key == 120)
		{
			textclear();
			return buyitem;
		}
	}
}

void shop::renderShop()
{
	for (int i = 20; i < 67; i++)
	{
		for (int j = 1; j < 18; j++)
		{
			gotoxy(i, j);
			setcolor(7, 7);
			cout << "��";
		}
	}

	for (int i = 20; i < 67; i++)
	{
		for (int j = 1; j < 18; j++)
		{
			gotoxy(i, j);
			setcolor(2, 2);
			cout << "��";
		}
	}

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gotoxy(i + 30, j + 1);
			setcolor(7, 7);
			cout << "��";
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i * 2 + 20, j + 9);
			setcolor(7, 7);
			cout << "��";
		}
	}

	gotoxy(28, 6);
	setcolor(0, 10);
	cout << "��";

	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gotoxy(i + 46, j + 5);
			setcolor(11, 11);
			cout << "��";
		}
	}

	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gotoxy(i + 46, j + 11);
			setcolor(11, 11);
			cout << "��";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			gotoxy(i + 30, j + 18);
			setcolor(8, 8);
			cout << "��";
		}
	}
}


void shop::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void shop::setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void shop::textclear()
{
	for (int i = 2; i < 85; i++)
	{
		for (int j = 21; j < 29; j++)
		{
			gotoxy(i, j);
			setcolor(15, 15);
			cout << "��";
		}
	}
}
