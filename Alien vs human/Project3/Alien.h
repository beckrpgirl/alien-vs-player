#ifndef ALIEN_H
#define ALIEN_H
#include "Player.h"

class Alien
{
public:
	//sets initial health level
	Alien(int health = 5, int life = 1, int round = 3);
	//reduces health level by 1
	void takeDamage();
	//increases health level by 1;
	void Regenerate();
	// reset alien
	void Areset();
	//tells an alien to take damage
	void PBlast(Player& aPlayer);



private:
	//health level
	int m_Health;
	//life count
	int m_life;
	//round count
	int m_round;
	//alien rest
	bool reset = false;

};

#endif
