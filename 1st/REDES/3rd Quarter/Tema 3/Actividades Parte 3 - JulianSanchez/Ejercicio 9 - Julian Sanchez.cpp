#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	std::string player1, player2;
	char menu;

	do
	{
		std::cout << "Jugador 1 -> Elija una opcion (piedra, papel o tijera) y pulse enter: ";
		std::cin >> player1;
		std::cout << "Jugador 2 -> Elija una opcion (piedra, papel o tijera) y pulse enter: ";
		std::cin >> player2;
		std::cout << std::endl;

		if ((player1 != "piedra" && player1 != "papel" && player1 != "tijera") || (player2 != "piedra" && player2 != "papel" && player2 != "tijera"))
		{
			std::cout << "Ha introducido una opcion no valida" << std::endl;
		}
		else
		{

			if (player1 == player2)
			{
				std::cout << "Empate!" << std::endl;
			}
			else if ((player1 == "tijera" && player2 == "papel") || (player1 == "papel" && player2 == "piedra") || (player1 == "piedra" && player2 == "tijera"))
			{
				std::cout << "El jugador 1 gana!" << std::endl;
			}
			else
			{
				std::cout << "El jugador 2 gana!" << std::endl;
			}
		}
		std::cout << "Desea volver a jugar (s/n): ";
		menu = _getche();

		std::cout << std::endl << std::endl;

	} while (menu == 's');


	return 0;
}