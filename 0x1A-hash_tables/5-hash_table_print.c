#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: list pointer
 * **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *list;

	if (ht == NULL)
		return;

	printf("{");
	list = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", list, tmp->key, tmp->value);
			list = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
