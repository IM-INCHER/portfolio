#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <string>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

class pokemonRender
{
public:
	pokemonRender();
	~pokemonRender();
	
	void renderPairi(int x, int y);
	void renderVcain(int x, int y);
	void renderRiako(int x, int y);
	void renderChikorita(int x, int y);

	void render(int x, int y, int kind);

	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
};

