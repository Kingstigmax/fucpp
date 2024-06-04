#include <iostream>

int main() {

    int numbers[3] {10,20,30};

    auto [x, y, z] = numbers;


    std::cout << x << std::endl;

    return 0;
}