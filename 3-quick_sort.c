#include "sort.h"
/**
 * lomuto_partition - Rearranges array for efficient QuickSort.
 * @array: pointer to the array of integers.
 * @low: first value in array.
 * @high: last value in array.
 * Return: Pivot number.
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot_value, i = low, j;

	pivot_value = array[high];

	for(j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j], size, array);
			i++;
		}
	}
	swap(&array[i], &array[high], size, array);
	return (i);
}

/**
 * quicksort_recursion - recursion
 * @array: pointer to the array of integers.
 * @low: first value in array.
 * @high: last value in array.
 * Return: Pivot number.
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quicksort_recursion(array, low, pivot_index -1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}

}

/**
 * quick_sort - sorts an array of integers in ascending,
 * order using the Quick sort algorithm.
 * @array: pointer to the array of integers.
 * @size: amount of integers in array.
 * Return: sorted array.
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * swap - swaps two integers
 * Return: a and b swaped
 * @a: first thing for swap
 * @b: second swap parameter
 */
void swap(int *a, int *b, size_t size, int *array)
{
	int temp;

	if (a != b)
	{
	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
	}
}
