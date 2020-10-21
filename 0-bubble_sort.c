#include "sort.h"
#include <stdlib.h>

/**
 * swap - function to swap int
 * @iz: first pointer to first position
 * @xz: pointer to second position in array
 * Return: void
 */
void swap(int *iz, int *xz)
{
	int temp = *iz;
	*iz = *xz;
	*xz = temp;
}

/**
 * bubble_sort - sort using Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, x;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size - i - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap(&array[x], &array[x + 1]);
				print_array(array, size);
			}
			else
			{
				continue;
			}
		}
	}
}
