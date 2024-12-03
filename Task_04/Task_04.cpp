#include <iostream>

constexpr unsigned MAX_ARRAY_CAPACITY = 100;

void reverseArray(int arr[MAX_ARRAY_CAPACITY], const unsigned size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int tempElement = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tempElement;
	}
}

int main()
{
	unsigned int size;
	std::cin >> size;

	int arr[MAX_ARRAY_CAPACITY];

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	reverseArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
}