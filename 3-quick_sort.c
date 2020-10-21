#include "sort.h"

/**
 * partition - function to sort with recursion
 * @array: array to sort
 * @start: left limit
 * @end: right limit
 * @size: size of the array to sort
 * Return: void
 */
int partition(int array[], int start, int end, size_t size)
{
	int pivot, part, temp, i;

	i = start;
	pivot = array[end];
	part = start - 1;

	while (i <= end)
	{
		if (array[i] <= pivot)
		{
			part++;
			if (part != i)
			{
				temp = array[part];
				array[part] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
	return (part);
}

/**
 * v_sort - function to validate the positions
 * @array: array to sort
 * @start: left limit
 * @end: right limit
 * @size: size of the array to sort
 * Return: void
 */
void v_sort(int array[], int start, int end, size_t size)
{
	if (start < end)
	{
		int pi = partition(array, start, end, size);

		v_sort(array, start, pi - 1, size);
		v_sort(array, pi + 1, end, size);
	}
}

/**
 * quick_sort - function to use Quicksort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	if (!array || !size)
		return;

	else
	{
		v_sort(array, start, end, size);
	}
}
