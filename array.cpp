#include <iostream>


int main() {

    std::string names[3];

    std::cout << "Please give me a name: " << std::endl;

    std::getline(std::cin, names[0]);

    std::cout << "Please give me a name: " << std::endl;

    std::getline(std::cin, names[1]);

    std::cout << "Please give me a name: " << std::endl;

    std::getline(std::cin, names[2]);

    return 0;
}
