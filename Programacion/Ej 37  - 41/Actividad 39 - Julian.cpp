#include <iostream>

bool isDayValid(int, int);

int main() {
	const short SIZE = 13;
	const short daysOfMonth[SIZE]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	short day, month;
	int sumOfDays{ 0 };

	do {
		std::cout << "Introduzca el numero del mes: ";
		std::cin >> month;
	} while (month < 1 || month > 12);

	do {
		std::cout << "Introduzca el dia (anio no bisiesto): ";
		std::cin >> day;
	} while (!isDayValid(day, month)); //TODO

	for (int i = 0; i < month; i++) {
		sumOfDays += daysOfMonth[i];
	}
	sumOfDays += day;

	std::cout << "Han pasado " << sumOfDays << " dias." << std::endl;
	return 0;
}

bool isDayValid(int day, int month) {
	if (day < 1 || day > 31) return false;
	if (month == 2 && day > 28) return false;
	if ((month == 4 || month == 6 || month == 11 || month == 9) && day > 30) return false;
	return true;
}