#include "sort.h"

void merge_sort(int *array, size_t size)
{
    size_t mid = size / 2;
    int *left = array;
    int *right = array + mid;
    size_t left_size = mid;
    size_t right_size = size - mid;
    size_t i = 0, j = 0, k = 0;
    int *temp = (int *)malloc(size * sizeof(int));

    if (size < 2)
        return;


    merge_sort(left, left_size);
    merge_sort(right, right_size);

    while (i < left_size && j < right_size)
    {
        if (left[i] < right[j])
        {
            temp[k++] = left[i++];
        }
        else
        {
            temp[k++] = right[j++];
        }
    }
    while (i < left_size)
    {
        temp[k++] = left[i++];
    }
    while (j < right_size)
    {
        temp[k++] = right[j++];
    }

    printf("Merging...\n[left]: ");
    print_array(left, left_size);
    printf("[right]: ");
    print_array(right, right_size);
    for (i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }

    printf("[Done]: ");
    print_array(array, size);
    free(temp);
}

