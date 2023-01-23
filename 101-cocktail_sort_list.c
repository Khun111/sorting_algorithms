#include "sort.h"
void cocktail_sort_list(listint_t **list)
{
	listint_t *cur = *list, *last = NULL;
	int swapped = 1;

	if (!list || !(*list) || !(*list)->next)
		return;

	while (swapped)
	{
		swapped = 0;
		cur = *list;
		for (; cur->next; cur = cur->next)
		{
			if (cur->next)
			{

				if (cur->n > cur->next->n)
				{
					swap_nodes(cur, cur->next, list);
					swapped = 1;
				}
			}
			if (!cur->next)
				last = cur;
		}
		if (!swapped)
			break;

		for (; last->prev; last = last->prev)
		{
			if (last->n < last->prev->n)
			{
				swap_nodes(last->prev, last, list);
				swapped = 1;
			}
		}
	}
}

void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list)
{
	listint_t *temp = NULL;

	temp = node1->prev;
	if (temp)
		temp->next = node2;
	node2->prev = temp;

	node1->prev = node2;
	node1->next = node2->next;


	node2->next = node1;
	if (node1->next)
		node1->next->prev = node1;
	if (node2->prev == NULL)
		*list = node2;
	print_list(*list);
}
