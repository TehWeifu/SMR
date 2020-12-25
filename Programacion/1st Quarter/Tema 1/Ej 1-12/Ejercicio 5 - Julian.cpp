#include <iostream>

int main()
{
	float r{ 5.8 };
	float s{ 1.5 };
	float t{ r - s };

	std::cout << "La resta de r menos s es:\n\n" << t << std::endl;
	return 0;
}