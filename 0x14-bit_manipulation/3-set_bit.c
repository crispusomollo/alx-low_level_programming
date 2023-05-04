#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the pointer to the number to change
 * @index: the index of the bit to be set to 1
 *
 * Return: 1 if success, -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
