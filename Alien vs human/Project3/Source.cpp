#include "Player.h"
#include "Alien.h"
#include "Game.h"
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	//srand(static_cast<unsigned int>(time(0)));

	Game playGame;
	cout << "Welcome to Aliens vs Player." << endl;
	if (playGame.gameRunning = true)
	{
		playGame.instructions();
		playGame.gamePlay();
	}
	else
		cout << "Thanks for playing!" << endl;
	system("pause");

	return 0;
}
