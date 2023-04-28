#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @head: list_t list to free
 */

void free_list(list_t *head)
{
	list_t *c;

	while (head)
	{
		c = head->next;
		free(head->str);
		free(head);
		head = c;
	}
}
