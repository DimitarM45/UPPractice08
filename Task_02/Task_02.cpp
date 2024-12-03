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

	int rows, cols;
	std::cin >> rows >> cols;

	enterMatrixValues(matrix, rows, cols);

	int totalColSum = 0;

	for (int col = 0; col < cols; col++)
	{
		int currColSum = 0;

		for (int row = 0; row < rows; row++)
		{
			currColSum += matrix[row][col];
		}

		totalColSum += currColSum;
	}

	std::cout << "Total column sum: " << totalColSum;
}