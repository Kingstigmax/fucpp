#include <iostream>

int main() {

    int input {};

    std::cin >> input;

    switch(input) {

        case 1: 
            std::cout << "1";
            break;

        case 2:
            std::cout << "2";
            break;

        default:
            std::cout << "Damn";
    }


    return 0;
}