#include "Player.h"
#include "Alien.h"
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;


//Game play
void Game::instructions()
{
	
	//Menu with player's actions. 
	cout << "Below are your command for dealing with the Aliens, defeat all of them and you save Earth!" << endl;
	cout << "To use your gun:" << endl;
	cout << "Blast - to fire" << endl;	//blast
	cout << "Reload - to reload" << endl; //reload
	cout << "Heal - restore your health, use wisely though, you only get 5 heals." << endl; //heal
	cout << "Help - to repeat this menu." << endl; //repeat directions.
}

void Game::gamePlay()
{
	//create player
	Player aPlayer;

	//create alien
	Alien anAlien;

	//load instructions
	Game ingame;

	

	do {
		string paction;
		cout << "What do you wish to do?" << endl;
		cin >> paction;
		//converting to lower case
		for (string::size_type j = 0; j < paction.length(); j++)
		{
			paction[j] = tolower(paction[j]);
		}
		cout << endl;
		//shoot gun
		if (paction == "blast") {
			aPlayer.Blast(anAlien);
			anAlien.PBlast(aPlayer);
		}
		//reload gun
		else if (paction == "reload") {
			aPlayer.Reload();
		}
		//heal player
		else if (paction == "heal") {
			aPlayer.Regenerate();
		}
		//reload menu
		else if (paction == "help") {
			ingame.instructions();
		}
		//Exit the game
		else if (paction == "exit") {
			cout << "Thanks for playing!" << endl;

			gameRunning = false;
		}
		else if (paction == "reset")
		{
			anAlien.Areset();
			aPlayer.Areset();
			cout << "Game reset" << endl;
		}
		//You put in an invalid choice
		else
			cout << "Invalid option, please use blast, reload, heal or help. \n";
	} while (gameRunning != false);



} 








//question player's action and do it. 


//player goes after alien, needs to defeat several of them starting with one and working their way up. 
//Alien gets the ability to shoot at player. 
//Once all aliens are defeated then player wins. 

