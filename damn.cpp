#include <iostream>


int main() {

    int numbers[] {10, 0, 20};

    for (int i = 0; i < std::size(numbers); i++)
    std::cout << numbers[i] << std::endl;

    // for (auto number: numbers)
    //     std::cout << number << std::endl;

    return 0;
}