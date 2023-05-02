#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: the first element in the linked list
 *
 * Return: the deleted data inside the elements,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

