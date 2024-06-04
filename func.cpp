#include <iostream>



void greet(std::string full) {
    std::cout << "Hello, " << full << std::endl;
}


std::string fullName(std::string fn, std::string ln) {
    return fn + " " + ln;
}

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int main() {

    greet(fullName("Freddie", "Lofthouse"));


    int max_num = max(6, 7);

    std::cout << max_num << std::endl;

    return 0;
}