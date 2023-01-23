#include "sort.h"

void heap_sort(int *array, size_t size) {
    size_t j, i, k, temp;

    for (i = size / 2 - 1; ; i--) {
        j = i;
        while (j <= size / 2 - 1) {
            k = 2 * j + 1;
            if (k + 1 < size && array[k] < array[k + 1]) {
                k++;
            }
            if (array[j] < array[k]) {
                temp = array[j];
                array[j] = array[k];
                array[k] = temp;
                j = k;
            } else {
                break;
            }
        }
    }
    print_array(array, size);
    printf("\n");
    for (i = size - 1; ; i--) {
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        j = 0;
        while (j <= i / 2 - 1) {
        	k = 2 * j + 1;
            if (k + 1 < i && array[k] < array[k + 1]) {
                k++;
            }
            if (array[j] < array[k]) {
                temp = array[j];
                array[j] = array[k];
                array[k] = temp;
                j = k;
            } else {
                break;
            }
        }
    }
    print_array(array, size);
}

