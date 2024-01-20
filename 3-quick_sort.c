#include "sort.h"
/**
 * lomuto_partition - Rearranges array for efficient QuickSort.
 * @array: pointer to the array of integers.
 * @low: first value in array.
 * @high: last value in array.
 * Return: Pivot number.
 */
int lomuto_partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i, minor_to_pivot = low - 1;

	for (i = 0; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			minor_to_pivot++;
			print_array(array, size);
			swap(&array[minor_to_pivot], &array[i]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
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
