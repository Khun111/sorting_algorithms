#include "sort.h"
void selection_sort(int *array, size_t size)
{
	size_t i, temp, j;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
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
