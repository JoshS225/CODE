#include <iostream> 

int main()
{
    double x {};
    double y {};
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> y;
    std::cout << x << '+' << y << " is " << x + y << std::endl;
    std::cout << x << '-' << y << " is " << x - y << '\n';
}