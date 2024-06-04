#include <iostream>

int main() {

   std::cout << "Rows: ";
   int row {};
   std::cin >> row;

   for(int i = 1; i <= row; i++) {
    for (int j = 0; j < i; j++) {
        std::cout << "*";
    }
    std::cout << std::endl;
   }

    return 0;
}