#include <iostream>

int main()
{
	double A, B, C;
	std::cout << "Введіть число A: ";
	std::cin >> A;
	std::cout << "Введіть число B: ";
	std::cin >> B;
	std::cout << "Введіть число C: ";
	std::cin >> C;
	double surface_area = 2 * (A * B + B * C + C * A);
	double volume = A * B * C;
	std::cout << "Площа поверхні: " << surface_area << std::endl;
	std::cout << "Об'єм: " << volume << std::endl;
	return 0;
}

