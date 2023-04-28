#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * @p: pointer to the list_t list
 * Return: number of elements in p
 */

size_t list_len(const list_t *p)
{
	size_t num = 0;

	while (p)
	{
		num++;
		p = p->next;
	}
	return (num);
}
