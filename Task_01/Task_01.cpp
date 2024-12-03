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

	for (int row = 0; row < rows; row+=2)
	{
		for (int col = 0; col < cols; col++)
		{
			int currNumber = matrix[row][col];

			if (currNumber % 2 != 0)
			{
				std::cout << currNumber << ' ';
			}
		}

		std::cout << std::endl;
	}
}