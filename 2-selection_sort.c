#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending,
 * order using the Selection sort algorithm.
 * @array: pointer to the array of integers.
 * @size: amount of numbers.
 * Return: sorted array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size - 1; i++)
	{
		unsigned int min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swaps two integers
 * Return: a and b swaped
 * @a: first thing for swap
 * @b: second swap parameter
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
