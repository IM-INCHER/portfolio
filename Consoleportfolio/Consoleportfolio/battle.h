#pragma once
#include "character.h"

class battle
{
private:

public:
	battle();
	~battle();

	void battleScene();

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
};

