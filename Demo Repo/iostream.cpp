#include <iostream>

int main() 
{
     int x{};
    std::cout << "Hello World\n"; // Prints string "Hello World" to Console and new line
    std::cout << "Hello " << "World\n"; //Same thing as prev line but in a new format;
    std::cout << 5; // Prints Number 5 to console
    std::cout << "x is equal to: " << x << std::endl; // std:end; is the same thing as \n, \n is for weird base C nerds apparently

    // Important to note thay std::cout is buffered, thus COUT must be flushed.
    std::cout << "Enter a number: "; // ask user for a number
    std::cout << "You entered " << x << '\n';
    return 0;
    return 0;
}