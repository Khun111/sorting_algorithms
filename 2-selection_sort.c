#include "sort.h"
/**
 * selection_sort - sort an array using the relevant algo
 * @array: array to be sorted
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
/*Declare variables*/
	size_t i, temp, j, min;

	if (size < 2)
		return;
/*Iterate through the entire array*/
	for (i = 0; i < size - 1; i++)
	{
		min = i;
/*Iterate from the next element to the rest of the array*/
		for (j = i + 1; j < size; j++)
		{
/*If the next < current, swap*/
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
