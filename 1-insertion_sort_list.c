#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: pointer to head
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *temp;

    if (!list || !*list)
        return;
	else
		current = *list;

    while (current->next)
	{
        if (current->n > current->next->n)
		{
            temp = current->next;
            current->next = temp->next;
            if (temp->next)
                temp->next->prev = current;
            temp->prev = current->prev;
            current->prev = temp;
            temp->next = current;
            if (!temp->prev)
                *list = temp;
            else
                temp->prev->next = temp;
            print_list(*list);
            current = *list;
        }
        else
            current = current->next;
    }
}

