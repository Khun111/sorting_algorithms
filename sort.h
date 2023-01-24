#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap_ele(int *a, int *b);
void helper_sort(int *array, int start, int end, size_t size);
int partition(int *array, size_t size, int start, int end);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list);
void cocktail_sort_list(listint_t **list);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void sift_down(int *array, int size, int root);
void radix_sort(int *array, size_t size);
#endif /* SORT_H */
