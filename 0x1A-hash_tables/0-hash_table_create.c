#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table to create
 * Return: pointer to the newly created table
 */
hash_table_t *hash_table_create(ulint size)
{
	table_t *h_tbl;
	node_t **array;
	ulint i;

	h_tbl = malloc(sizeof(table_t));
	if (!h_tbl)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(h_tbl);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	h_tbl->size = size;
	h_tbl->array = array;

	return (h_tbl);
}
