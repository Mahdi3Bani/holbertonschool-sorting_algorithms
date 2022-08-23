#include "sort.h"






void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}



/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int j = 0;

	for (i = 0; i < size - 1; i++)
	{
		if (array[j] > array[j + 1])
		{
			swap(&array[i], &array[j]);
		}
		print_array(array, size);
	}
}
