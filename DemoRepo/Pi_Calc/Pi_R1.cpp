#include <iostream>
#include <cmath>
#include <iomanip>
#include <numbers>
// This programme will calculate Pi using the maclauren series of tan inverse.
// To compile this program ensure you are using C++23 and/or use the -std=c++23 tag in your compilation.
bool posfind(int i);
bool validinputchk(int n);

int main()
{
    bool xvalidchk {false};
    long double n {1};
    unsigned int max {};
    long double total {};
    long double adder {};
    unsigned int precision {};
    while (xvalidchk == false) 
    {
        std::cout << "What degree of precision in calculating Pi would you like: ";
        std::cin >> max;
        xvalidchk = validinputchk(max);
    }
    xvalidchk = false;
    while (xvalidchk == false) 
    {
        std::cout << "What degree of precision of decimals of Pi would you like to display: ";
        std::cin >> precision;
        xvalidchk = validinputchk(precision);
    }
    
    std::cout.precision(precision);
    while (n < max)
    {
        adder = 1/(2*n - 1);
        if (posfind(n) == true)
        {   
            total = total + adder;
            /*
            std::cerr << "Adder = " << adder << std::endl;
            std::cerr << "Total = " << total << std::endl;
            std::cerr << "n = " << n << std::endl;
            */
        }
        else 
        {
            total = total - adder;
            /*
            std::cerr << "Adder = " << adder << std::endl;
            std::cerr << "Total = " << total << std::endl;
            std::cerr << "n = " << n << std::endl;
            */
        }
        adder = 0;
        n++;
    }
    total = total * 4;
    std::cout << "Pi at n degrees accuracy is: " << total << std::endl;
    std::cout << "Pi from math.h is actually: " << std::numbers::pi;
    return 0;
}
bool posfind(int i)
{
    if ((i % 2) == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }

}
bool validinputchk(int n)
{
    if (n >= (std::pow(2, 32) - 1) || n < 0) 
        {
            std::cout << "Erm this is like not right big cheese please try again" << std::endl;
            std::cin.clear();
            return false;
        }
        else 
        {
            return true;
        }
}