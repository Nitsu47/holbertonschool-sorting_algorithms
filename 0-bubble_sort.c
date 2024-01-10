#include "sort.h"
/**
 * bubble_sort -
 * @array: pointer to the array to sort.
 * @size: size of the array.
 * Return: 
 */

void bubble_sort(int *array, size_t size)
{
	size_t index;

	if(array == NULL)
		return;

	print_array(array, size);

	while(array)
	{
		for (index = 0; index < size; index++)
		{
			if (array[index] < array[index + 1] && array[index + 1] != '\0')
			{
				swap(array[index], array[index + 1]);
				print_array(array, size);
			}
		}
	}
	print_array(array, size);
}
