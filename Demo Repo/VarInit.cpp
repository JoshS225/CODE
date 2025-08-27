#include <iostream>

int main()
{
    [[maybe_unused]] bool xIsTrue;
                    double dpi {24};
    std::cout << dpi << '\n';
    dpi =  3.14159;
    std::cout << dpi << '\n';
    return 0;
}