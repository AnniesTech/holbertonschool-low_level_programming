#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash table
 * Return: No return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while (tmp1 != NULL)
		{
			tmp2 = tmp1->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
			tmp1 = tmp2;
		}
	}
	free(ht->array);
	free(ht);
}
