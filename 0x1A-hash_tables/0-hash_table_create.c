#include "hash_tables.h"
/**
 * hash_table_create - description
 * @size: size
 * Return: NULL or new
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = NULL;

new = malloc(sizeof(hash_table_t));

if (new == NULL)
return (NULL);

new->array = calloc(size, sizeof(hash_node_t *));

if (new->array == NULL)
{
free(new);
return (NULL);
}

new->size = size;

return (new);
}
