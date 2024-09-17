#include <iostream>
#include "Monster.h"

Monster::Monster(std::string name, std::string race, int speed, int hp, int def, int atk) :
	name_(name),
	race_(race),
	speed_(speed),
	hp_(hp),
	def_(def),
	atk_(atk)
{
	//std::cout << "Summon" << std::endl;
}

void Monster::TellTheName(std::string race)
{
	std::cout << race << '\n' << name_ << std::endl;
}

bool Monster::GetFirstAtk(int speedmon)
{
	if (speed_ - speedmon >= 0)
	{

		return true;
	}
	else if (speed_ - speedmon < 0)
	{
		return false;
	}

}

int Monster::GetDamage(int damage, int resultDamage, bool winner)
{

	if (damage > 0)
	{
		hp_ -= damage;
		resultDamage = damage;
		
	

		if (hp_ <= 0)
		{
			hp_ = 0;
			std::cout << name_ << " " << race_ << " is dead" << std::endl;
			winner = false;
			return winner;
		}
	}
	else
	{

		std::cout << name_ << " block the attack " << std::endl;
		return hp_;

	}

}

bool Monster::IsAlive()
{
	if (hp_ > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
