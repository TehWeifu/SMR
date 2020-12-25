#include <iostream>
#include <vector>
#include <string>

int menu();
void addMat();
void subMat();
void multiMat();
void traMat();

std::vector<int> sliceStr(const std::string&);

int main() {
	int menuOpt;
	menuOpt = menu();

	while (menuOpt != 0) {
		switch (menuOpt)
		{
		case 1:
			addMat();
			break;
		case 2:
			subMat();
			break;
		case 3:
			multiMat();
			break;
		case 4:
			traMat();
			break;
		default:
			std::cout << "\nHas introducido una opcion no valida.";
			break;
		}
		menuOpt = menu();
	}

	return 0;
}

int menu() {
	int option{ -1 };
	std::cout << "Calculadora de matrices";
	std::cout << "\n1. Sumar matrices";
	std::cout << "\n2. Restar matrices";
	std::cout << "\n3. Multiplicar matrices";
	std::cout << "\n4. Transpuesta de una matriz";
	std::cout << "\n0. Salir";
	std::cout << "\nEliga una opcion: ";
	std::cin >> option;
	return option;
}

void addMat() {
	std::vector<std::vector<int>> mat1;
	std::vector<std::vector<int>> mat2;
	std::vector<std::vector<int>> result;
	std::vector<int> tmpVec;
	std::string tmpStr;

	short rowMat1, colMat1, rowMat2, colMat2;
	std::cout << "Inserta las filas de la primera matriz: ";
	std::cin >> rowMat1;
	std::cout << "Inserta las columnas de la primera matriz: ";
	std::cin >> colMat1;
	std::cout << "Inserta las filas de la segunda matriz: ";
	std::cin >> rowMat2;
	std::cout << "Inserta las columnas de la segunda matriz: ";
	std::cin >> colMat2;

	if (rowMat1 != rowMat2 || colMat1 != colMat2) {
		std::cout << "No se pueden sumar matrices de diferente size" << std::endl;
		return;
	}

	std::cin.ignore();

	std::cout << "\nValores de la primera matriz " << std::endl;
	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat1) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat1.push_back(tmpVec);
	}

	std::cout << "\nValores de la segunda matriz " << std::endl;
	for (int i = 0; i < rowMat2; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat2) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat2.push_back(tmpVec);
	}


	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		for (int j = 0; j < colMat1; j++) {
			tmpVec.push_back(mat1[i][j] + mat2[i][j]);
		}
		result.push_back(tmpVec);
	}

	std::cout << "\nEl resultado de sumar ambas matrices es: " << std::endl;
	for (unsigned short i = 0; i < result.size(); i++) {
		for (unsigned short j = 0; j < result[i].size(); j++) {
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	return;
}

void subMat() {
	std::vector<std::vector<int>> mat1;
	std::vector<std::vector<int>> mat2;
	std::vector<std::vector<int>> result;
	std::vector<int> tmpVec;
	std::string tmpStr;

	short rowMat1, colMat1, rowMat2, colMat2;
	std::cout << "Inserta las filas de la primera matriz: ";
	std::cin >> rowMat1;
	std::cout << "Inserta las columnas de la primera matriz: ";
	std::cin >> colMat1;
	std::cout << "Inserta las filas de la segunda matriz: ";
	std::cin >> rowMat2;
	std::cout << "Inserta las columnas de la segunda matriz: ";
	std::cin >> colMat2;

	if (rowMat1 != rowMat2 || colMat1 != colMat2) {
		std::cout << "No se pueden restar matrices de diferente size" << std::endl;
		return;
	}

	std::cin.ignore();

	std::cout << "\nValores de la primera matriz " << std::endl;
	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat1) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat1.push_back(tmpVec);
	}

	std::cout << "\nValores de la segunda matriz " << std::endl;
	for (int i = 0; i < rowMat2; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat2) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat2.push_back(tmpVec);
	}


	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		for (int j = 0; j < colMat1; j++) {
			tmpVec.push_back(mat1[i][j] - mat2[i][j]);
		}
		result.push_back(tmpVec);
	}

	std::cout << "\nEl resultado de restar ambas matrices es: " << std::endl;
	for (unsigned short i = 0; i < result.size(); i++) {
		for (unsigned short j = 0; j < result[i].size(); j++) {
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	return;
}

void multiMat() {
	std::vector<std::vector<int>> mat1;
	std::vector<std::vector<int>> mat2;
	std::vector<std::vector<int>> result;
	std::vector<int> tmpVec;
	std::string tmpStr;
	long long tmpSum{ 0 };

	short rowMat1, colMat1, rowMat2, colMat2;
	std::cout << "Inserta las filas de la primera matriz: ";
	std::cin >> rowMat1;
	std::cout << "Inserta las columnas de la primera matriz: ";
	std::cin >> colMat1;
	std::cout << "Inserta las filas de la segunda matriz: ";
	std::cin >> rowMat2;
	std::cout << "Inserta las columnas de la segunda matriz: ";
	std::cin >> colMat2;

	if (colMat1 != rowMat2) {
		std::cout << "\nError. Las columnas de la primera matrix deben ser iguales a las columnas de la segunda matriz" << std::endl;
		return;
	}

	std::cin.ignore();

	std::cout << "\nValores de la primera matriz " << std::endl;
	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat1) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat1.push_back(tmpVec);
	}

	std::cout << "\nValores de la segunda matriz " << std::endl;
	for (int i = 0; i < rowMat2; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat2) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat2.push_back(tmpVec);
	}

	for (unsigned short i = 0; i < rowMat1; i++) {
		tmpVec = {};
		for (unsigned short j = 0; j < colMat2; j++) {
			tmpSum = 0;
			for (unsigned short k = 0; k < colMat1; k++) {
				tmpSum += mat1[i][k] * mat2[k][j]; // CUIDADO AQUI
			}
			tmpVec.push_back(tmpSum);
		}
		result.push_back(tmpVec);
	}

	std::cout << "\nEl resultado de multiplicar ambas matrices es: " << std::endl;
	for (unsigned short i = 0; i < result.size(); i++) {
		for (unsigned short j = 0; j < result[i].size(); j++) {
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	return;
}

void traMat() {
	std::vector<std::vector<int>> mat1;
	std::vector<std::vector<int>> result;
	std::vector<int> tmpVec;
	std::string tmpStr;
	long long tmpSum{ 0 };

	short rowMat1, colMat1;
	std::cout << "Inserta las filas de la matriz: ";
	std::cin >> rowMat1;
	std::cout << "Inserta las columnas de la matriz: ";
	std::cin >> colMat1;

	std::cin.ignore();

	std::cout << "\nValores de la matriz " << std::endl;
	for (int i = 0; i < rowMat1; i++) {
		tmpVec = {};
		std::cout << "Introduzca los valores de la fila " << i + 1 << " separados por espacios: ";
		std::getline(std::cin, tmpStr);
		tmpVec = sliceStr(tmpStr);
		if (tmpVec.size() != colMat1) {
			std::cout << "No ha introducido el numero de valores adecuado";
			return;
		}
		mat1.push_back(tmpVec);
	}

	for (unsigned short i = 0; i < colMat1; i++) {
		tmpVec = {};
		for (unsigned short j = 0; j < rowMat1; j++) {
			tmpVec.push_back(mat1[j][i]);
		}
		result.push_back(tmpVec);
	}

	std::cout << "\nLa transpuesta de la matrix es: " << std::endl;
	for (unsigned short i = 0; i < result.size(); i++) {
		for (unsigned short j = 0; j < result[i].size(); j++) {
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	return;
}

std::vector<int> sliceStr(const std::string& str) {
	std::vector<int> res;
	std::string tmpStr{ "" };

	for (unsigned short i = 0; i < str.size(); i++) {
		if (std::isdigit(str[i])) {
			tmpStr += str[i];
		}
		else {
			res.push_back(std::stoi(tmpStr));
			tmpStr = "";
		}
	}
	if (!tmpStr.empty()) res.push_back(std::stoi(tmpStr));

	return res;
}
