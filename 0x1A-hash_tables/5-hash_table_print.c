#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *curr;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
curr = ht->array[i];

while (curr != NULL)
{
printf("'%s': '%s'", curr->key, curr->value);

if (curr->next != NULL)
printf(", ");

curr = curr->next;

}

}

printf("}\n");

}
