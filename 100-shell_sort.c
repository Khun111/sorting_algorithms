#include "sort.h"
/**
 * shell_sort - sort an array
 * @array: array to be sorted
 * @size: array size
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	for (gap = 1; gap < (size / 3); gap = gap * 3 + 1)
	;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j - gap] > array[j]; j -= gap)
			{
				swap_ele(&array[j - gap], &array[j]);
			}
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
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
