#include "lists.h"

/**
* free_list - free the list
* @head: Pointer to the head of the linked list.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
