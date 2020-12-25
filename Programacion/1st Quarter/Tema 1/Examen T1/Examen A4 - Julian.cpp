#include <iostream>
#include <cmath>

int main() {
    long double dividendo;
    long double divisor;

    std::cout << "Indica el dividendo: ";
    std::cin >> dividendo;
    std::cout << "Indica el divisor: ";
    std::cin >> divisor;

    if (divisor != 0.0) {
        std::cout << "El cociente es: " << static_cast<int>(dividendo / divisor) << std::endl;
        std::cout << "El resto es: " << std::fmodl(dividendo, divisor) << std::endl;
    }
    else {
        std::cout << "No es posible la division entre 0, es un error" << std::endl;
    }

 	return 0;
}