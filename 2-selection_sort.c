#include "sort.h"

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
 * selection_sort - function to use Selection sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx; 
  
	for (i = 0; i < size - 1; i++) 
	{ 
		min_idx = i; 
		for (j = i + 1; j < size; j++) 
		  if (array[j] < array[min_idx]) 
			min_idx = j; 
		
		if (min_idx != i)
		{
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
		}
	} 
}
