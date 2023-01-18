#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: pointer to head
 */
void insertion_sort_list(listint_t **list)
{
	/*Declare variables*/
	listint_t *current;
	listint_t *temp;
/*Validate arguments*/
	if (!list || !*list)
		return;
/*Keep track of the current node*/
	current = *list;

/*Iterate through the list*/
	while (current->next)
	{
/*Using temp to keep track of next element, swap if the current > next*/
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

