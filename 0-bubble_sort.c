#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	for (i = 0; i < size - 1; i++)
	{
		if (array[j] > array[j + 1])
		{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = array[j];
		}
		print_array(*array, size);
	}
}
