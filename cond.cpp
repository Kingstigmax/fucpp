#include <iostream>


int main() {


    int numbers[2] {};
    std::cout << "Could you give me two numbers: " << std::endl;

    std::cin >> numbers[0] >> numbers[1];

    int result = (numbers[0] > numbers[1]) ? numbers[0] : numbers[1];
    std::cout << "The biggest number is: " << result << std::endl;

    
    return 0;
}
