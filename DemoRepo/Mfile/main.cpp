#include <iostream>

int getInt();

int main()
{
	int x{ getInt() };
	int y{ getInt() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}