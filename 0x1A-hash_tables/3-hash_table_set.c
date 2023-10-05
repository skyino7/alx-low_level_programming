#include  "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_set - set table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new = NULL, *curr = NULL;

if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
return (0);

index = key_index((const unsigned char *) key, ht->size);

curr = ht->array[index];

while (curr)
{
if (strcmp(curr->key, key) == 0)
{
free(curr->value);
curr->value = strdup(value);
if (curr->next == NULL)
return (0);

return (1);
}
curr = curr->next;
}

new = (hash_node_t *)malloc(sizeof(hash_node_t));

if (new == NULL)
return (0);

new->key = strdup(key);
if (new->key == NULL)
free(new->key);
return (0);

new->value = strdup(value);
if (new->value == NULL)
{
free(new->key);
/* free(new->value); */
free(new);
return (0);
}

new->next = ht->array[index];
ht->array[index] = new;

return (1);

}
