#include <iostream>
#include <cmath>
// This programme will calculate Pi using the maclauren series of tan inverse.

bool posfind(int n);


int main()
{
    bool xvalidchk {false};
    long double n {1};
    unsigned int max {};
    long double total {};
    long double adder {};
    while (xvalidchk == false) 
    {
        std::cout << "What degree of precision in calculating Pi would you like: ";
        std::cin >> max;
        if (max >= (std::pow(2, 32) - 1)) 
        {
            std::cout << "Erm this is like wayyyyy too big bucko please try again" << std::endl;
            std::cin.clear();
        }
        else 
        {
            xvalidchk = true;
        }
    }
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
    return 0;
}
bool posfind(int i)
{
    if (i == 1)
    {
        return true;
    }

    if ((i % 2) == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }

}