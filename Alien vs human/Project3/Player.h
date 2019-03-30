#ifndef PLAYER_H
#define PLAYER_H
#include "Alien.h"

class Player 
{
public:
	//sets initial ammo level 
	Player(int ammo = 5, int health = 20, int medkit = 5);
	//tells an alien to take damage
	void Blast(Alien& anAlien);
	//increases ammo 
	void Reload();
	//reduces health 
	void takeDamage();
	//increases health
	void Regenerate();
	// reset game
	void Areset();





private:
	//amount of ammo
	int m_ammo;
	//health level
	int m_PHealth;
	//med kit
	int m_medkit;



};

#endif