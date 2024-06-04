#include <iostream>



const int rows = 2;
const int cols = 3;

void printMatrix(int matrix[rows][cols]) {

    for(int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            std::cout << matrix[row][col] << std::endl;
        }
    }
}

int main() {

    // 2 x 3 matrix


    int matrix[rows][cols] {
        {10, 20, 50},
        {40, 46, 22}
        };


    printMatrix(matrix);

    return 0;
}