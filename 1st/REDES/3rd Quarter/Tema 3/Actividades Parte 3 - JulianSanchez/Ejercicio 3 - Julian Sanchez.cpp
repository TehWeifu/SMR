#include <iostream>
#include <iomanip>

int main()
{
	int hour, minute;
	do
	{
		std::cout << "Escriba una hora: ";
		std::cin >> hour;

		std::cout << "Escriba un minuto: ";
		std::cin >> minute;

		if (hour < 0 || hour > 23)
		{
			std::cout << "Ha introducido una hora no valida." << std::endl;
		}
		if (minute < 0 || minute > 59)
		{
			std::cout << "Ha introducido minutos no validos." << std::endl;
		}
		std::cout << std::endl;

	} while ((hour < 0 || hour > 23) || (minute < 0 || minute > 59));

	std::cout << "La hora es " << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << std::endl;

	return 0;
}