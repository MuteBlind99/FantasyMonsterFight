
#include <iostream>
#include "Fight.h"
#include "Monster.h"


int main()
{
	int monster1 = 0;
	int monster2 = 0;



	Monster monsterA;
	Monster monsterB;


	std::cout << "Bien le bonjour invocateur, Choisissez 2 creatures pour le combat" << std::endl;
	std::cout << "Ork [1] , Troll [2] , Goblin [3]" << std::endl;


	std::cin >> monster1;
	std::cin >> monster2;

	int  roundnumb = 0;
	bool nowinner = true;
	bool battlestep;

	int damage1 = 0;
	int damage2 = 0;
	int resultDamage = 0;

	char reset = 'none';
	bool resetloop = true;

	Monster orc("Willy", "Ork", 60, 100, 50, 80);
	Monster troll("Pol", "Troll", 30, 100, 70, 70);
	Monster goblin("Zemmour", "Goblin", 90, 100, 66, 60);
	// Selection des monstres

	bool gameLoop = true;
	do
	{


		switch (monster1)
		{
		case 1:
			monsterA = orc;
			break;
		case 2:
			monsterA = troll;
			break;
		case 3:
			monsterA = goblin;
			break;
		default:

			std::cout << "Invalide Command" << std::endl;

			break;
		}
		std::cout << "You summon : " + monsterA.get_name() << std::endl << std::endl;
		std::cout << "Race : " << monsterA.get_race() << '\n' << "HP: " << monsterA.get_hp() << " ATK: " << monsterA.get_atk() << " DEF: " << monsterA.get_def() << " SPEED: " << monsterA.get_speed() << std::endl << std::endl;

		switch (monster2)
		{
		case 1:
			monsterB = orc;
			break;
		case 2:
			monsterB = troll;
			break;
		case 3:
			monsterB = goblin;
			break;
		default:

			std::cout << "Invalide Command" << std::endl;

			break;
		}

		std::cout << "You summon : " << monsterB.get_name() << std::endl << std::endl;
		std::cout << "Race : " << monsterB.get_race() << '\n' << "HP: " << monsterB.get_hp() << " ATK: " << monsterB.get_atk() << " DEF: " << monsterB.get_def() << " SPEED: " << monsterB.get_speed() << std::endl << std::endl;


		Fight(monsterA.get_name(), monsterB.get_name());
		// Comparaison de vitesse
		if (monsterA.GetFirstAtk(monsterB.get_speed()))
		{
			battlestep = true;
		}
		else
		{
			battlestep = false;
		}

		//Combat tant qu'un monstre est vivant
		while (gameLoop)
		{
			
			damage1 = monsterA.get_atk() - monsterA.get_def();//Dégat du monstre A sur B
			damage2 = monsterB.get_atk() - monsterA.get_def();//Dégat du monstre B sur A

			// Compteur de round
			roundnumb += 1;

			damage1 = monsterA.get_atk() - monsterB.get_def();
			damage2 = monsterB.get_atk() - monsterA.get_def();

			//Qui frappe le premier ?
			switch (battlestep)
			{
			case true:// Si monsterA est premier
				if (damage1 > 0)
				{
					
					std::cout << "---------------------------------------------------------------------" << std::endl;
					std::cout << monsterA.get_name() << " do the first move" << std::endl;

					monsterB.GetDamage(damage1, resultDamage,nowinner);

					std::cout << monsterB.get_name() << " -" << damage1 << " HP" << std::endl;

					std::cout << "---------------------------------------------------------------------" << std::endl;
					monsterA.GetDamage(damage2, resultDamage,nowinner);

					std::cout << monsterA.get_name() << " -" << damage2 << " HP" << std::endl;
				}//L attaque du monstre A est superieur a la defense de B
				else
				{
					
					std::cout << "---------------------------------------------------------------------" << std::endl;
					std::cout << monsterA.get_name() << " do the first move" << std::endl;

					monsterB.GetDamage(damage1, resultDamage,nowinner);

					std::cout << monsterB.get_name() << " -" << damage1 << " HP" << std::endl;

					std::cout << "---------------------------------------------------------------------" << std::endl;
					monsterA.GetDamage(damage2, resultDamage,nowinner);

					std::cout << monsterA.get_name() << " -" << damage2<< " HP" << std::endl;

				}


				break;
			case false:// Si monsterB est premier
				// L attaque du monstre B est superieur a la defense de A
				if (damage2 > 0)
				{
					
					std::cout << "---------------------------------------------------------------------" << std::endl;
					std::cout << monsterB.get_name() << " do the first move" << std::endl;

					monsterA.GetDamage(damage2, resultDamage,nowinner);
					//damage2 = monsterB.get_atk() - monsterA.get_def();
					std::cout << monsterA.get_name() << " -" << damage2 << " HP" << std::endl;


					std::cout << "---------------------------------------------------------------------" << std::endl;
					monsterB.GetDamage(damage1, resultDamage, nowinner);
					//damage1 = monsterA.get_atk() - monsterB.get_def();
					std::cout << monsterB.get_name() << " -" << damage1 << " HP" << std::endl;

					std::cout << "---------------------------------------------------------------------" << std::endl;
				}
				else
				{
					
					std::cout << "---------------------------------------------------------------------" << std::endl;
					std::cout << monsterB.get_name() << " do the first move" << std::endl;

					monsterA.GetDamage(damage2, resultDamage,nowinner);
					//damage2 = monsterB.get_atk() - monsterA.get_def();
					std::cout << monsterA.get_name() << " -" << damage2 << " HP" << std::endl;


					std::cout << "---------------------------------------------------------------------" << std::endl;
					monsterB.GetDamage(damage1, resultDamage,nowinner);
					//damage1 = monsterA.get_atk() - monsterB.get_def();
					std::cout << monsterB.get_name() << " -" << damage1 << " HP" << std::endl;

					std::cout << "---------------------------------------------------------------------" << std::endl;
				}


				break;

			}
			std::cout << "---------------------------------------------------------------------" << std::endl;
			std::cout << "Round :" << roundnumb << std::endl;

			std::cout << monsterA.get_name() << std::endl << "HP :" << monsterA.get_hp() << std::endl << std::endl;


			std::cout << monsterB.get_name() << std::endl << "HP :" << monsterB.get_hp() << std::endl << std::endl;

			system("pause");
		}
		if (monsterA.IsAlive()== true)
		{
			if (monsterB.IsAlive()== true)
			{
				gameLoop = true;
			}
			else
			{
				std::cout << "The winner is :" << monsterA.get_name() << std::endl;
				gameLoop = false;
			}

		}
		else
		{
			std::cout << "The winner is :" << monsterB.get_name() << std::endl;
			gameLoop = false;
		}



	} while (gameLoop);
	while (resetloop)
	{


		std::cout << "---------------------------------------------------------------------" << std::endl;
		std::cout << "Continue ? [y]/[n]" << std::endl;
		std::cin >> reset;
		switch (reset)
		{
		case 'y':
			gameLoop = true;
			resetloop = false;
			break;
		case 'Y':
			gameLoop = true;
			resetloop = false;
			break;
		case 'n':
			std::cout << "Bye Bye...";
			break;
		case 'N':
			gameLoop = false;
			break;
		default:

			return EXIT_FAILURE;
		}
	}
}


