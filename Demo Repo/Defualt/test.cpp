#include <iostream>

#define BOB
#define JOE

int main()
{
    #ifdef BOB
        std::cout << "MA Name BOB" << std::endl;
    #endif

    #ifdef JOE
        std::cout << "Ma Name JOE" << std::endl;
    #endif
    return 0;
}