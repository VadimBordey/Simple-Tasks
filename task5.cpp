#include <iostream>
#include <iomanip>

int main()
{
	double R;
	double const pi = 3.14;
	std::cout << "Введіть радіус R: ";
	std::cin >> R;
	double area = pi * R * R;
	double circumference = 2 * pi * R;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Площа круга: " << area << std::endl;
	std::cout <<"Довжина кола: " << circumference << std::endl;
	return 0;
}
