#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in the linked list
 * @head: the first node in the linked list
 * @index: the index of a node to be returned
 *
 * Return: the node we are looking for, or NULL if it fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
