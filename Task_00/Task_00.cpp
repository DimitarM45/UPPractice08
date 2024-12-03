#include <iostream>

constexpr unsigned MAX_MATRIX_SIZE = 100;

void enterMatrixValues(int matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], unsigned rows, unsigned cols)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			std::cin >> matrix[row][col];
		}
	}
}

int main()
{
	int matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];

	int matrixSize;
	std::cin >> matrixSize;

	enterMatrixValues(matrix, matrixSize, matrixSize);

	int mainDiagonalSum = 0;
	int secondaryDiagonalSum = 0;

	for (int i = 0, j = matrixSize - 1; i < matrixSize; i++, j--)
	{
		mainDiagonalSum += matrix[i][i];
		secondaryDiagonalSum += matrix[i][j];
	}

	std::cout << "Main diagonal sum: " << mainDiagonalSum << std::endl;
	std::cout << "Secondary diagonal sum: " << secondaryDiagonalSum << std::endl;
}