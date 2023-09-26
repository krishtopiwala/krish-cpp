#include <iostream>

int main()
{
    int feet, inches;

    std::cout << "enter feet: ";
    std::cin >> feet;

    inches = feet * 12;
    std::cout << "INCHES: " << inches;
    return 0;
}