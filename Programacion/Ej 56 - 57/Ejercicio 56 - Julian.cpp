#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

//Hacer variables globales siempre esta bien, especialmente cuando son arrays, pero w/e
std::vector<std::string> namesPro;
std::vector<float> pricesPro;

int menu();
short nuevoProducto(const std::string&, float);
long double funcionPromedio();
void listarProductos();


int main() {
	std::cout << "TIENDA TOBALCAIDE" << std::endl;

	short menuInt = menu();
	std::string tmpStr;
	float tmpPrice;

	while (menuInt != 4) {
		switch (menuInt)
		{
		case 1:
			short tmpRes;
			std::cout << "Introduzca el nombre del producto: ";
			std::cin >> tmpStr;
			std::cout << "Introduzca el precio del producto: ";
			std::cin >> tmpPrice;
			std::cout << std::endl;
			tmpRes = nuevoProducto(tmpStr, tmpPrice);
			if (tmpRes == 1) { std::cout << "Nuevo producto incluido." << std::endl; }
			else if (tmpRes == -2) { std::cout << "Error. Ya existe un producto con este nombre" << std::endl; }
			else { std::cout << "Error. No se puede incluir el nuevo producto. La lista esta llena" << std::endl; }
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "El promedio de todos los productos de la tienda es: " << funcionPromedio() << std::endl << std::endl;
			break;
		case 3:
			listarProductos();
			break;
		default:
			break;
		}
		menuInt = menu();
	}

	std::cout << "Gracias por comprar en la tienda Tobalcaide uwu" << std::endl;

	return 0;
}

int menu() {
	short input;
	std::cout << "1 - Nuevo producto\n2 - Precio medio\n3 - Listar producto\n4- Salir\nElija una opcion: ";
	std::cin >> input;

	while (input < 1 || input > 4) {
		std::cout << "Ha introducido una opcion no valida. Elija una opcion: ";
		std::cin >> input;
	}
	std::cout << std::endl;
	return input;
}

short nuevoProducto(const std::string& name, float price) {
	if (namesPro.size() > 99) return -1;
	if (std::find(std::begin(namesPro), std::end(namesPro), name) != std::end(namesPro)) return -2;

	namesPro.push_back(name);
	pricesPro.push_back(price);
	return 1;
}

long double funcionPromedio() {
	return std::accumulate(std::begin(pricesPro), std::end(pricesPro), 0.0) / pricesPro.size();
}

void listarProductos(){
	std::cout << "Nombre Producto\t\tPrecio" << std::endl;

	for (int i = 0; i < namesPro.size(); i++) {
		std::cout << namesPro[i] << "\t\t\t" << pricesPro[i] << std::endl;
	}
	std::cout << std::endl;
	return;
}
