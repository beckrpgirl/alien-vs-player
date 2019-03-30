#include "Player.h"
#include "Alien.h"
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

Player::Player(int ammo, int health, int medkit) : 
	m_ammo(5), 
	m_PHealth(health), 
	m_medkit(medkit)
{}

void Player::Blast(Alien& anAlien)
{
	if (m_ammo > 0)
	{
		//cout << "You hit the alien!!!" << endl;
		//ammo goes down by one
		m_ammo -= 1;
		anAlien.takeDamage();

	}
	else
		cout << "You are out of ammo reload!" << endl;

	return;
}

void Player::Reload()
{
	if (m_ammo < 5)
	{
		//player reloads gun
		cout << "Gun Reloaded!" << endl;
		//ammo goes up by 5
		m_ammo = 5;
	}
	else
		cout << "Your gun is fully reloaded." << endl;

}
//player's ability to take damage
void Player::takeDamage()
{
	srand(static_cast<unsigned int>(time(0)));
	int rNum = rand();

	cout << "health " << m_PHealth << endl;
	if (m_PHealth <= 30 && m_PHealth > 5)
	{

		//health reduced by random amount. 
		int x = (rNum % 3);
		m_PHealth -= x;
		//cout << "You have been hit for " << x << " health by the alien." << endl;

		if (x < 1)
		{
			cout << "health " << m_PHealth << endl;
			cout << "The alien failed to hit you." << endl;
		}
		else
		{
			cout << "You have been hit for " << x << " health by the alien." << endl;
		}
		//alien is shot
		cout << "You now have " << m_PHealth << " health remaining." << endl;
	}
	else if (m_PHealth <= 5)
	{
		m_PHealth -= 1;
		cout << "You should heal up!" << endl;
	}
	else
	{
		cout << "You have lost, the Aliens invaded Earth, and now subject to their laws." << endl;
		cout << "Thanks for playing!" << endl;
		cout << "Exit - to leave the game." << endl;
		cout << "Reset - to play again." << endl;
	}


}

void Player::Areset()
{
	m_PHealth = 30;
	m_ammo = 5;

}

void Player::Regenerate()
{
	cout << "health " << m_PHealth << endl;

	if(m_PHealth >= 26)
	{

		cout << "You can not heal, your health can not be greater then 30." << endl;
		cout << "You now have " << m_medkit << " medical kits health remaining." << endl;
	}
	else {
		m_medkit -= 1;
		m_PHealth += 5;
		//player heals!
		cout << "You now have " << m_PHealth << " health remaining." << endl;
		cout << "You now have " << m_medkit << " medical kits health remaining." << endl;
	}
}
