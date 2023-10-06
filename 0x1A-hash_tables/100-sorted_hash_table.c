#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create table
 * @size: size
 * Return: NULL or new_table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_table = NULL;
unsigned long int i;

new_table = (shash_table_t *)malloc(sizeof(shash_table_t));

if (new_table == NULL)
return (NULL);

new_table->shead = NULL;
new_table->stail = NULL;

new_table->size = size;
new_table->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));

if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
(new_table->array)[i] = NULL;

return (new_table);
}

/**
 * shash_table_set - set table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *current, *new_pair;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);

new_pair = (shash_node_t *)malloc(sizeof(shash_node_t));

if (new_pair == NULL)
return (0);

new_pair->key = strdup(key);
new_pair->value = strdup(value);

if (new_pair->key == NULL || new_pair->value == NULL)
{
free(new_pair->key);
free(new_pair->value);
free(new_pair);
return (0);
}

new_pair->next = ht->array[index];
ht->array[index] = new_pair;

if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
{
new_pair->snext = ht->shead;
new_pair->sprev = NULL;

if (ht->shead != NULL)
ht->shead->sprev = new_pair;
else
ht->stail = new_pair;

ht->shead = new_pair;
}
else
{
current = ht->shead;
while (current->snext != NULL && strcmp(key, current->snext->key) >= 0)
{
current = current->snext;
}
new_pair->snext = current->snext;
new_pair->sprev = current;
if (current->snext != NULL)
current->snext->sprev = new_pair;
else
ht->stail = new_pair;

current->snext = new_pair;
}

return (1);
}

/**
 * shash_table_get - get table
 * @ht: hash table
 * @key: key
 * Return: NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current;
/* Check for invalid parameters */
if (ht == NULL || key == NULL || key[0] == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);

current = current->next;
}

return (NULL);
}

/**
* shash_table_print - Print the sorted hash table
* @ht: The sorted hash table to print
* Return: Void
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;

if (ht == NULL)
return;

printf("{");
current = ht->shead;
while (current != NULL)
{
printf("'%s': '%s'", current->key, current->value);

if (current->snext != NULL)
printf(", ");

current = current->snext;
}

printf("}\n");
}

/**
* shash_table_print_rev - Print the sorted hash table in reverse order
* @ht: The sorted hash table to print in reverse order
* Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;
/* Check for invalid parameter */
if (ht == NULL)
return;

printf("{");
current = ht->stail;
while (current != NULL)
{
printf("'%s': '%s'", current->key, current->value);

if (current->sprev != NULL)
printf(", ");

current = current->sprev;
}

printf("}\n");
}

/**
* shash_table_delete - Delete a sorted hash table and free all allocated memory
* @ht: hash table to delete
* Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current;
unsigned long int i;

if (ht == NULL)
return;

/* Traverse the array and free key-value pairs */
for (i = 0; i < ht->size; ++i)
{
shash_node_t *current = ht->array[i];

while (current != NULL)
{
shash_node_t *next = current->next;
current = next;
}
}

free(ht->array);

current = ht->shead;
while (current != NULL)
{
shash_node_t *next = current->snext;
current = next;
}

free(ht);
}
