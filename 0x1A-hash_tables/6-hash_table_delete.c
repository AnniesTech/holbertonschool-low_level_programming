#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash table
 * Return: No return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp1 = NULL, *temp2 = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; i < ht->size; ++i)
		{
			temp1 = ht->array[i];

			if (temp1)
			{
				if (temp1->next)
				{
					temp1 = temp1->next;
					while (temp1)
					{
						temp2 = temp1;
						temp1 = temp1->next;
						free(temp2->key);
						free(temp2->value);
						free(temp2);
					}
				}

				temp1 = ht->array[i];
				if (temp1->key && temp1->value)
				{
					free(temp1->key);
					free(temp1->value);
				}
			}

			free(temp1);
		}

		free(ht->array);
		free(ht);
	}
}
