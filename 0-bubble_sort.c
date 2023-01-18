#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	int temp, swapped = 0;
	size_t loop = 0, i;

	for (; loop < size - 1; loop++) 
	{
		for (i = 0; i < size - loop -1; i++)
		{	if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
		break;
	}
}
