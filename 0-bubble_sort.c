#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending,
 * order using the Bubble sort algorithm.
 * @array: pointer to the array to sort.
 * @size: size of the array.
 * Return: the ordered list from lowest to highest.
 */

void bubble_sort(int *array, size_t size)
{
	size_t index, iterator;

	if (array == NULL)
		return;

	print_array(array, size);

	for (iterator = 0; iterator < size - 1; iterator++)
	{
		for (index = 0; index < size - iterator - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(&array[index], &array[index + 1]);
				print_array(array, size);
			}
		}
	}
	print_array(array, size);
}

/**
 * swap - swaps two integers
 * Return: a and b swaped
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
