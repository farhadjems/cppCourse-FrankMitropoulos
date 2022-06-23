#include <iostream>

int main()
{
    int userNumber = 0;
    std::cout << "Please enter number between 1 and 100: ";
    std::cin >> userNumber;

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "Not really!, " << userNumber << " is my favorite number!" << std::endl;
}