#include "mainGame.h"

int main()
{
	system("color f0");

	srand(time(NULL));

	mainGame mg;
	mg.update();
	mg.release();

	return 0;
}