#include "sort.h"

/**
 * qs - function to sort with recursion
 * @array: array to sort
 * @start: left limit
 * @end: right limit
 * Return: void
 */
void qs(int array[], int start, int end)
{
	int left, right, temp, pivot;
	/* size_t size = sizeof(array); */

	left = start;
	right = end;
	pivot = array[(left + right) / 2];

	do {
		while (array[left] < pivot && left < end)
		left++;

		while (pivot < array[right] && right > start)
		right--;

		if (left <= right)
		{
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
			left++;
			right--;
		}
	/* print_array(array, size); */
	}

	while (left <= right);
	if (start < right)
	{
		qs(array, start, right);
	}
	if (end > left)
	{
		qs(array, left, end);
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
	qs(array, 0, size - 1);
	print_array(array, size);
}