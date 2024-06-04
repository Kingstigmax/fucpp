#include <iostream>


const int rows {3};
const int cols {3};

void matrix_mult(int matrix[rows][cols])
{
    for (int row = 0; row < rows; ++row)
    {
        for (int col = 0; col < cols; ++col)
        {
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }

};


int main()
{


    int matrix[rows][cols] 
        {
        {3, 4, 5},
        {3, 4, 5},
        };


    int size {std::size(matrix)};


    std::cout << size << std::endl;


    matrix_mult(matrix);


    return 0;
}