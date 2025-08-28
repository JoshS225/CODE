#include <iostream>

int main()
{
    int x{};
    std::cout << "What is x? ";

    // Fixing this so VS code will output to the terminal instead of the output terminal was incredibly cooked :3
    std::cin >> x;
    
    std::cout << "x is: " << x; 
    return 0;
}