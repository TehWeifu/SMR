#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

//Hacer variables globales siempre esta bien, especialmente cuando son arrays, pero w/e
std::vector<std::string> namesPro;
std::vector<float> pricesPro;

int menu();
short nuevoProducto(const std::string&, const float&);
long double funcionPromedio();
void listarProductos();
bool modificarNombre(const std::string&, const std::string&);
bool modificarPrecio(const std::string&, const float&);
bool eliminarProducto(const std::string&);
bool buscarNombre(const std::string&);


int main() {
	std::cout << "TIENDA TOBALCAIDE" << std::endl;

	short menuInt = menu();
	std::string tmpStr;
	std::string newStr;
	float tmpPrice;

	while (menuInt != 8) {
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
		case 4:
			std::cout << "Introduzca el nombre del prodcuto que desees modificar: ";
			std::cin >> tmpStr;
			std::cout << "Introduzca el nuevo nombre del producto: ";
			std::cin >> newStr;
			std::cout << std::endl;
			if (modificarNombre(tmpStr, newStr)) {
				std::cout << "Se ha modificado el nombre correctamente." << std::endl;
			}
			else {
				std::cout << "Error. No existe un producto con tal nombre." << std::endl;
			}
			std::cout << std::endl;
			break;
		case 5:
			std::cout << "Introduzca el nombre del producto cuyo precio desees modificar: ";
			std::cin >> tmpStr;
			std::cout << "Introduzca el nuevo precio del producto: ";
			std::cin >> tmpPrice;
			std::cout << std::endl;
			if (modificarPrecio(tmpStr, tmpPrice)) {
				std::cout << "Se ha modificado el precio del producto correctamente." << std::endl;
			}
			else {
				std::cout << "Error. No existe un producto con tal nombre." << std::endl;
			}
			std::cout << std::endl;
			break;
		case 6:
			std::cout << "Introduzca el nombre del prodcuto que desees eliminar: ";
			std::cin >> tmpStr;
			if (eliminarProducto(tmpStr)) {
				std::cout << "Se ha eliminado el producto correctamente." << std::endl;
			}
			else {
				std::cout << "Error. No existe un producto con tal nombre." << std::endl;
			}
			std::cout << std::endl;
			break;
		case 7:
			std::cout << "Introduzca el nombre del prodcuto que desees buscar: ";
			std::cin >> tmpStr;
			while (!buscarNombre(tmpStr)) {
				std::cout << "Error. No existe un producto con tal nombre. Introduzca otro producto (o pulse 0 para salir): ";
				std::cin >> tmpStr;
				if (tmpStr == "0") break;
			}
			std::cout << std::endl;
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
	std::cout << "1 - Nuevo producto\n2 - Precio medio\n3 - Listar producto\n4 - Modificar nombre\n5 - Modificar precio\n6 - Eliminar producto\n7 - Buscar producto\n8 - Salir\nElija una opcion: ";
	std::cin >> input;

	while (input < 1 || input > 8) {
		std::cout << "Ha introducido una opcion no valida. Elija una opcion: ";
		std::cin >> input;
	}
	std::cout << std::endl;
	return input;
}

short nuevoProducto(const std::string& name, const float& price) {
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

bool modificarNombre(const std::string& toFind, const std::string& toChange) {
	auto prodIt = std::find(std::begin(namesPro), std::end(namesPro), toFind);
	if (prodIt != std::end(namesPro)) {
		*prodIt = toChange;
		return true;
	}
	return false;
}

bool modificarPrecio(const std::string& toFind, const float& toChange) {
	int pos;
	auto prodIt = std::find(std::begin(namesPro), std::end(namesPro), toFind);
	if (prodIt != std::end(namesPro)) {
		pos = prodIt - std::begin(namesPro);
		pricesPro[pos] = toChange;
		return true;
	}
	return false;
}

bool eliminarProducto(const std::string& toFind) {
	int pos;
	auto prodIt = std::find(std::begin(namesPro), std::end(namesPro), toFind);
	if (prodIt != std::end(namesPro)) {
		pos = prodIt - std::begin(namesPro);
		namesPro.erase(prodIt);
		pricesPro.erase(std::begin(pricesPro) + pos);
		return true;
	}
	return false;
}

bool buscarNombre(const std::string& toFind) {
	int pos;
	auto prodIt = std::find(std::begin(namesPro), std::end(namesPro), toFind);
	if (prodIt != std::end(namesPro)) {
		pos = prodIt - std::begin(namesPro);
		std::cout << "El prodcuto " << *prodIt << " tiene un precio de: " << pricesPro[pos] << std::endl << std::endl;
		return true;
	}
	return false;
}
