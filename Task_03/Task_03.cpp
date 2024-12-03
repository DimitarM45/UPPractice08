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

void multiplyMatrixByScalar(int matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], unsigned rows, unsigned cols, int scalar)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			matrix[row][col] *= scalar;
		}
	}
}

void multiplyMatrixByScalar(double matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], unsigned rows, unsigned cols, int scalar)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			matrix[row][col] *= scalar;
		}
	}
}

void printMatrix(int matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], unsigned rows, unsigned cols)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			std::cout << matrix[row][col] << ' ';
		}

		std::cout << std::endl;
	}
}

int main()
{
	int matrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];

	int rows, cols;
	std::cin >> rows >> cols;

	enterMatrixValues(matrix, rows, cols);

	int scalar;
	std::cin >> scalar;

	multiplyMatrixByScalar(matrix, rows, cols, scalar);

	printMatrix(matrix, rows, cols);
}