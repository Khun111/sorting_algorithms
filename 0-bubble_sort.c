#include "sort.h"
/**
 * bubble_sort - function to sort array using bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	/*Initialize variables*/
	int temp, swapped = 0;
	size_t loop = 0, i;

	if (size < 2)
		return;

	/*Loop through the entire array*/
	for (; loop < size - 1; loop++)
	{
		/*Loop through the unsorted part*/
		for (i = 0; i < size - loop - 1; i++)
		{
			/*Swap the elements if next > prev*/
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		/*Exit the loop if it's already sorted*/
		if (swapped == 0)
		break;
	}
}
