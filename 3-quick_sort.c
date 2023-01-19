#include "sort.h"
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	helper_sort(array, 0, size - 1, size);
}
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
			swap_ele(&array[i], &array[j]);
			print_array(array, size);

		}
	}
/*if j > pivot, move j to the left and update the pivot*/
	swap_ele(&array[i + 1], &array[end]);
	print_array(array, size);
	return (i + 1);
}
void swap_ele(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
