#include <iostream>
#include <conio.h>

int main()
{
	char menu;

	std::cout << "MENU" << std::endl;
	std::cout << "1. Crear\n2. Buscar\n3. Modificar\n4. Eliminar\n0. Salir" << std::endl;
	std::cout << "Eliga una opcion: ";
	menu = _getche();

	std::cout << std::endl;
	
	
	switch (menu)
	{
	case '0':
		std::cout << "Usted ha escogido la opcion 0. Salir" << std::endl;
		break;
	case '1':
		std::cout << "Usted ha escogido la opcion 1. Crear" << std::endl;
		break;
	case '2':
		std::cout << "Usted ha escogido la opcion 2. Buscar" << std::endl;
		break;
	case '3':
		std::cout << "Usted ha escogido la opcion 3. Modificar" << std::endl;
		break;
	case '4':
		std::cout << "Usted ha escogido la opcion 4. Eliminar" << std::endl;
		break;

	default:
		std::cout << "Usted ha introducido una opcion no valida" << std::endl;
		break;
	}
	return 0;
}