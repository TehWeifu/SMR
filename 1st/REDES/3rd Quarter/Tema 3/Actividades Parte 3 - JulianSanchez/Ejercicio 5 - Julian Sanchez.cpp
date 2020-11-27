#include <iostream>
#include <conio.h>

int main()
{
	double meters;
	char menu;

	std::cout << "Introduzca un numero de metros: ";
	std::cin >> meters;

	std::cout << "Desea convertir a:\n1) Decimetros\n2) Centimetros\n3) Milimetros\nElija una opcion: ";
	menu = _getche();

	std::cout << std::endl;
	std::cout << meters << " metros son ";

	switch (menu)
	{
	case '1':
		std::cout << std::fixed << meters * 10 << " decimetros" << std::endl;
		break;
	case '2':
		std::cout << std::fixed << meters * 100 << " centimetros" << std::endl;
		break;
	case '3':
		std::cout << std::fixed << meters * 1'000 << " milimetros" << std::endl;
		break;
	default:
		break;
	}

	return 0;
}