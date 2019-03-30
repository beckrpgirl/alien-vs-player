#include "Player.h"
#include "Alien.h"
#include "Game.h"
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

Alien::Alien (int health, int life, int round):
m_Health(health),
m_life(life),
m_round(round)
{}

void Alien::PBlast(Player& aPlayer)
{

	if (m_Health > 0)
	{
		//cout << "You hit the alien!!!" << endl;
		aPlayer.takeDamage();

	}
	else
		return;
}

void Alien::takeDamage()
{
	srand(static_cast<unsigned int>(time(0)));
	int rNum = rand(); 

		int n = (5 * m_life);
		//Player aplayer;

			if (m_Health <= n && m_Health > 1)
			{
				//random code 

				//health reduced by random amount. 
				int x = (rNum % 3);
				m_Health -= x;
				//cout << "you hit for " << x << endl;

				if (x < 1)
				{
					cout << "You missed!" << endl;
				}
				else
				{
					cout << "You hit the alien!!!" << endl;
				}
				//alien is shot
				cout << "Alien health is now " << m_Health << "." << endl;

				//aplayer.takeDamage();

			}
			else if (m_Health = 1 && m_round > 1)
			{
				m_Health -= 1;
				cout << "You have defeated the Alien!" << endl;
				m_life += 1;
				m_Health = (m_life * 5);
				m_round -= 1;
				cout << "You have " << m_round << " more Aliens to defeat." << endl;
			}
			else
			{
				cout << "You have won!" << endl;
				cout << "Thanks for playing!" << endl;
				cout << "Exit - to leave the game." << endl;
				cout << "Reset - to play again." << endl;
			}
	
}
void Alien::Areset()
{
	m_Health = 5;
	m_life = 1;
	m_round = 3;
}

void Alien::Regenerate()
{
	//alien health restores by one
	m_Health += 1;
	//alien heals!
	cout << "Alien's health has regenerated, they now have " << m_Health << "." << endl;
}



