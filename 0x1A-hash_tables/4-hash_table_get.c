#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @key: key
 * @ht: pointer to the hash table
 * Return: the value assoaciated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = helper_key_index(key, ht->size);
	hash_node_t *temp;
	char *value;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);
	if (!ht->array[index])
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	temp = ht->array[index];
	while (temp && temp->next)
	{
		temp = temp->next;
		if (strcmp(temp->key, key) == 0)
			value = temp->value;
	}
	return (value);
}
