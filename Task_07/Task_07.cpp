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

	int count = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
		{
			count++;
		}
	}

	std::cout << count;
}