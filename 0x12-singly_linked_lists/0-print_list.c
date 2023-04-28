#include <stdio.h>
#include "lists.h"

/**
* print_list - print the contents of a list
* @p: pointer to a list
* Return: number of nodes
*/

size_t print_list(const list_t *p)
{
	size_t num_nodes = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		num_nodes++;
	}

	return (num_nodes);
}
