#include <iostream>

constexpr unsigned MAX_ARRAY_CAPACITY = 100;

int main()
{
	unsigned size;
	std::cin >> size;

	int arr[MAX_ARRAY_CAPACITY];

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		int currElement = arr[i];

		if (currElement % 2 == 0)
		{
			std::cout << currElement << ' ';
		}
	}
}