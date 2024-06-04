#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {

    const short minValue {1};
    const short maxValue {6};
    
    srand(time(nullptr));

    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;


    std::cout << "Your first: " << first << "\n" << "Your second: " << second << std::endl;
    return 0;
}
