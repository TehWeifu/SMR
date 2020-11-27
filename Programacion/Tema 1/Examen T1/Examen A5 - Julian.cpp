#include <iostream>

int main() {
    enum class nums {cero = 0, uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve,
        diez, once, doce, trece, catorce, quince};

    unsigned short num;
    nums test;

    std::cout << "Introduzca un numero entre el 0 y el 15: ";
    std::cin >> num;



    if (num >=0 && num <= 15)
    {
        test = static_cast<nums>(num);

        std::cout << "El numero en binario es: ";

        switch (test)
        {
        case nums::cero:
            std::cout << "0" << std::endl;
            break;
        case nums::uno:
            std::cout << "1" << std::endl;
            break;
        case nums::dos:
            std::cout << "10" << std::endl;
            break;
        case nums::tres:
            std::cout << "11" << std::endl;
            break;
        case nums::cuatro:
            std::cout << "100" << std::endl;
            break;
        case nums::cinco:
            std::cout << "101" << std::endl;
            break;
        case nums::seis:
            std::cout << "110" << std::endl;
            break;
        case nums::siete:
            std::cout << "111" << std::endl;
            break;
        case nums::ocho:
            std::cout << "1000" << std::endl;
            break;
        case nums::nueve:
            std::cout << "1001" << std::endl;
            break;
        case nums::diez:
            std::cout << "1010" << std::endl;
            break;
        case nums::once:
            std::cout << "1011" << std::endl;
            break;
        case nums::doce:
            std::cout << "1100" << std::endl;
            break;
        case nums::trece:
            std::cout << "1101" << std::endl;
            break;
        case nums::catorce:
            std::cout << "1110" << std::endl;
            break;
        case nums::quince:
            std::cout << "1111" << std::endl;
            break;
        default:
            break;
        }
    }
    else {
        std::cout << "Error. El numero no esta entre el rango permitido" << std::endl;
    }
 	return 0;
}