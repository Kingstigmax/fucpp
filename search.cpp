#include <iostream>

//  int linearSearch(int numbers[], int size, int target){
//      for (int i = 0; i < size; i++) {
//         if (numbers[i] != target){
//             return -1;
//         }
//         else return i;
//      }
//     }


int find(int numbers[], int size, int target){
        for (int i = 0; i < size; i++)
            if (numbers[i] == target)
                return i;
        return -1;  
}

int main() {

    int numbers[] {10,30,50,40};
    int target {};
    std::cin >> target;

    std::cout << find(numbers, std::size(numbers), target) << std::endl;

    return 0;
}