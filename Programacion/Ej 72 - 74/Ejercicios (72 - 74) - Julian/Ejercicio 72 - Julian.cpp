#include <iostream>

int main() {
	//Punto 1
	int* p1{ nullptr };
	int* p2{ nullptr };

	//Punto 2
	int var1{ 1 };
	int var2{ 2 };
	int var3{ 3 };

	//Punto 3
	p1 = &var1;
	std::cout << "El contenido de la variable a la que apunta el puntero p1 es: " << *p1 << std::endl;

	//Punto 4
	p2 = &var2;
	std::cout << "El contenido de la variable a la que apunta el puntero p2 es: " << *p2 << std::endl;

	//Punto 5
	std::cout << "El valor de p1 es: " << p1 << std::endl;
	std::cout << "El valor de p2 es: " << p2 << std::endl;

	//Punto 6
	p2 = p1;
	std::cout << "El contenido de la variable a la que apunta el puntero p2 es: " << *p2 << std::endl;

	//Punto 7
	std::cout << "El valor de p1 es: " << p1 << std::endl;
	std::cout << "El valor de p2 es: " << p2 << std::endl;

	//Punto 8
	p2 = &var3;
	std::cout << "El contenido de la variable a la que apunta el puntero p2 es: " << *p2 << std::endl;

	//Punto 9
	*p2 = 30;
	std::cout << "El contenido de la variable a la que apunta el puntero p2 es: " << *p2 << std::endl;

	//Punto 10
	var2 = *p1 + *p2;
	std::cout << "El valor de var2 es: " << var2 << std::endl;

	//Punto 11
	std::cout << "La posicion de memoria de p1 es: " << &p1 << std::endl;
	std::cout << "La posicion de memoria de p2 es: " << &p2 << std::endl;

	return 0;
}