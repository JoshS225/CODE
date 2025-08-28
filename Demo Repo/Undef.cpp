#include <iostream>

void dnot(int&){}


int main()
{
    // Without definition who knows whats to happen!!!!
    int x;
    // Not neccessary with this Gcc but alas
    dnot(x);
    std::cout << x << std::endl;
    return 0;
    
}