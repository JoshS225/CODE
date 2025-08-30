#include <iostream> 

double doublenumber(int num)
{
    return num * 2;
}


int main()
{
    int x {};
    std::cout << "What Number would you like to double: ";
    std::cin >> x;
    x = doublenumber(x);
    std::cout << "Number Doubled is: " << x;
    return 0;
}