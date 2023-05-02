#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
/*		free(head->str); */
		free(head);
		head = a;
	}
}
