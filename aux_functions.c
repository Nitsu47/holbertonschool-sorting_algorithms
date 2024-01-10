#include "sort.h"
/**
 * swap - swaps two integers
 * Return: a and b swaped
 */
void swap(int a, int b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
