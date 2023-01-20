#include "sort.h"
/**
 * quick_sort - main quicksort function
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	helper_sort(array, 0, size - 1, size);
}

/**
 * helper_sort - helper function to receive start and end
 * @array: array to sort
 * @size: size of array
 * @start: beginning element
 * @end: last element used as pivot
 */
void helper_sort(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
/*Get updated pivot from partition function*/
		int pi = partition(array, size, start, end);

/*Recursively call quicksort on left and right subarrays after partition*/
		helper_sort(array, start, pi - 1, size);
		helper_sort(array, pi + 1, end, size);

	}
}

/**
 * partition - helper function for partitioning
 * @array: array to sort
 * @size: size of array
 * @start: beginning element
 * @end: last element used as pivot
 * Return: pivot
 */
int partition(int *array, size_t size, int start, int end)
{
/*Initialize pivot to the last element*/
	int pivot = array[end], i, j;
/*Use the i variable to keep track of the smaller element*/
	i = start - 1;

/*Loop through the entire array from the start*/
	for (j = start; j < end; j++)
	{
/*check if j is less than pivot and move i to the right*/
		if (array[j] < pivot)
		{
			i++;
			if (array[j] != array[i])
			{
				swap_ele(&array[i], &array[j]);
				print_array(array, size);
			}

		}
	}
/*if j > pivot, move j to the left and update the pivot*/
	if (array[i + 1] != array[end])
	{
		swap_ele(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap_ele - function to swap two elements
 * @a: first element
 * @b: second element
 */
void swap_ele(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
