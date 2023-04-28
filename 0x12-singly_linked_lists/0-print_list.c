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
		if (p->str)
			printf("[%u] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		p = p->next;
		num_nodes++;
	}

	return (num_nodes);
}
