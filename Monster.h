#pragma once
#include <string>

class Monster
{
private:
	std::string name_ = "none";
	std::string race_ = "none";
	int speed_ = 0;
	int hp_ = 0;
	int def_;
	int atk_;
public:
	Monster() = default;
	Monster(std::string name, std::string race, int speed, int hp, int def, int atk);

	int get_hp() { return hp_; }
	int get_atk() { return atk_; }
	int get_speed() { return speed_; }
	int get_def() { return def_; }
	std::string get_name() { return name_; }
	std::string get_race() { return race_; }

	//Monster(std::string name, int speed, int hp, int def, int atk);
	void TellTheName(std::string race);

	bool GetFirstAtk( int speedmon2);
	int GetDamage(int damage, int resultDamage, bool winner);
	bool IsAlive();
};

