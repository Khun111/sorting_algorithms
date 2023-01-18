#include "sort.h"
/**
 * selection_sort - sort an array using the relevant algo
 * @array: array to be sorted
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
/*Declare variables*/
	size_t i, temp, j;
/*Iterate through the entire array*/
	for (i = 0; i < size; i++)
	{
/*Iterate from the next element to the rest of the array*/
		for (j = i + 1; j < size; j++)
		{
/*If the next < current, swap*/
			if (array[j] < array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
		print_array(array, size);
	}
}
