#include <iostream>


int main() {

    std::string street, city, state, zipCode {};

    std::cout << "Street: ";
    std::getline(std::cin, street);

    std::cout << street << std::endl;

    return 0;
}