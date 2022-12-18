#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "My name is Jason." << std::endl;
    std::cout << "Easier new line\n" << std::endl;
    std::cout << "x is equal to: " << x << "\n";

    std::cout << "Enter a number to add to x: "; // ask user for a number

    int y{ }; // define variable x to hold user input (and zero-initialize it)
    std::cin >> y; // get number from keyboard and store it in variable x

    std::cout << "Total: " << x+y << '\n';
    return 0;
}