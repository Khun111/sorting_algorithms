#include "sort.h"
/**
 * counting_sort - sort an array with counting sort
 * @array: array to be sorted
 * @size: array size
 */
void counting_sort(int *array, size_t size)
{
	size_t maxi, i;
	int *count = NULL, *sort = NULL;

/* Check for valid input */
	if (!array || size < 2)
		return;
/* find max of array and derive count array size from it +1*/
	maxi = array[0];

	for (i = 1; i < size; i++)
		if ((size_t)array[i] > maxi)
			maxi = array[i];
/* Allocate memory for count array */
	count = malloc(sizeof(int) * (maxi + 1));
	if (!count)
		return;
/* Fill count array with zeroes */
	for (i = 0; i <= maxi; i++)
		count[i] = 0;

/*Fill the count of ele in arr in the corresponding idx of count arr */
	for (i = 0; i < size; i++)
		count[array[i]]++;
/* Store cumulative sum of elements */
	for (i = 1; i <= maxi; i++)
		count[i] += count[i - 1];
	print_array(array, maxi + 1);
/* Allocate memory for array to ise for sorting */
	sort = malloc(sizeof(int) * count[i]);
	if (!sort)
		return;
/* Move the ele from arr to the sorted arr using the count val -1 as index */
	for (i = 0; i < size; i++)
	{
		sort[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
/* Copy sorted array to original */
	for (i = 0; i < size; i++)
		array[i] = sort[i];

	free(sort);
	free(count);
}
