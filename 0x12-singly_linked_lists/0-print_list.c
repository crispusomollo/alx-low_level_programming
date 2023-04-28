#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @p: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *p)
{
	size_t num = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		num++;
	}

	return (num);
}
