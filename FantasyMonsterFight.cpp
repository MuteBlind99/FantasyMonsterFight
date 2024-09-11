#include <chrono>
#include <iostream>


int monster2 = 0;
int monster1 = 0;

int fighter1;
int fighter2;

int speedmonster1;
int speedmonster2;

int hpmonster2;
int hpmonster1;

const char* racemonster1;
const char* racemonster2;

int attackmonster1;
int attackmonster2;

int defensemonster1;
int defensemonster2;

int main()
{
	std::cout << "Bien le bonjour invocateur, Choisissez 2 créatures pour le combat" << std::endl;
	std::cout << "Ork [1] , Troll [2] , Goblin [3]" << std::endl;
	const char* racemonster1;
	std::cin >> monster1;
	std::cin >> monster2;
	
	switch (monster1)
	{
	case 1:
		racemonster1 = "Ork";
		hpmonster1 = 5;
		attackmonster1 = 5;
		speedmonster1 = 5;
		defensemonster1 = 5;
		break;

	case 2:
		racemonster1 = "Troll";
		hpmonster1 = 8;
		attackmonster1 = 8;
		speedmonster1 = 8;
		defensemonster1 = 8;
		break;

	case 3:
		racemonster1 = "Goblin";
		hpmonster1 = 3;
		attackmonster1 = 3;
		speedmonster1 = 3;
		defensemonster1 = 3;
		break;

	default:
		std::cout << "Choix invalid" << std::endl;
		return EXIT_FAILURE;
		break;
	}
	switch (monster2)
	{
	case 1:
		racemonster2 = "Ork";
		hpmonster2 = 5;
		attackmonster2 = 5;
		speedmonster2= 5;
		defensemonster2 = 5;
		break;

	case 2:
		racemonster2 = "Troll";
		hpmonster2 = 8;
		attackmonster2 = 8;
		speedmonster2 = 8;
		defensemonster2 = 8;
		break;

	case 3:
		racemonster2 = "Goblin";
		hpmonster2 = 3;
		attackmonster2 = 3;
		speedmonster2 = 3;
		defensemonster2 = 3;
		break;

	default:
		std::cout << "Choix invalid" << std::endl;
		return EXIT_FAILURE;
		break;
	}
	std::cout << "Vous avez choisi :" << racemonster1 << " et " << racemonster2 << std::endl;



	do
	{
		if (speedmonster1 < speedmonster2)
		{

		}
		else if (speedmonster2 < speedmonster1)
		{

		}
		else
		{

		}

	} while (hpmonster1 > 0 || hpmonster2 > 0);


}
/*int Fight()
{

	while (hpmonster1 > 0 || hpmonster2 > 0)
	{

	}
}*/