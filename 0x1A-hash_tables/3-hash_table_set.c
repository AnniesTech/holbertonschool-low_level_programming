#include "hash_tables.h"

/**
 * new_node - Creates a new node
 *
 * @key: Node's key
 * @value: Node's value
 *
 * Return: The new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = (NULL);

	return (new);
}


/**
 * hash_table_set -  function that adds an element to the hash table.
 *
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 *
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *merge = NULL, *new = NULL;

	if (key && key[0] != '\0' && ht && ht->array && ht->size)
	{
		/* Generates the hash(index) for the key */
		index = key_index((const unsigned char *)key, ht->size);

		/* If the hash index is empty */
		if (ht->array[index] == NULL)
		{
			new = new_node(key, value);
			ht->array[index] = new;
			return (1);
		}
		/* Collission handling */
		else
		{
			merge = malloc(sizeof(hash_node_t));
			if (merge == NULL)
				return (0);
			merge = ht->array[index];
			while (merge != NULL)
			{
				if (strcmp(merge->key, key) == 0)
				{
					merge->value = strdup(value);
					return (1);
				}
				merge = merge->next;
			}
			merge = ht->array[index];
			new = new_node(key, value);
			new->next = merge;
			ht->array[index] = new;
			return (1);
		}
	}
	return (0);
}
