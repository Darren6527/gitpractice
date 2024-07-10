#include <iostream>

#include "KCircle.h"

int main()
{
	float r = 0;
	std::cout << "Please input the radius of circle: ";
	std::cin >> r;
	KCircle circle(r);

	std::cout << "The perimeter of the circle is: " << circle.getPerimeter() << std::endl;
	std::cout << "The area of the circle is: " << circle.getArea() << std::endl;

	return 0;
}