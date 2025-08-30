#include "io.h"

int readint()
{
    int x {};
    std::cout << "What is your number: ";
    std::cin >> x;
    return x;
}

void writeadd(int x, int y)
{
    std::cout << "First Num + Second Num = " << x + y << std::endl;
}