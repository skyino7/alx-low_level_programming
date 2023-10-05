#include  "hash_tables.h"
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
hash_node_t *new = NULL;

if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
return (0);

index = key_index((const unsigned char *) key, ht->size);

new = (hash_node_t *)malloc(sizeof(hash_node_t));

if (new == NULL)
return (0);

new->key = strdup(key);
new->value = strdup(value);

if (new->key == NULL || new->value == NULL)
{
free(new->key);
free(new->value);
free(new);
return (0);
}

new->next = ht->array[index];
ht->array[index] = new;

return (1);

}
