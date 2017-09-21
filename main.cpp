#include <iostream>

void main()
{
	int x = 5;
	int y = 6;
	int* px = &x;

	*px = 10;
	y = *px + x;

	std::cout << y << std::endl;
}