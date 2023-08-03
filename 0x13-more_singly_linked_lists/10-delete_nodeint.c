#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *previous;
    unsigned int i;

    if (head || *head == NULL)
        return (-1);
    
    current = *head;

    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    for (i = 0; current && i < index; i++)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    previous->next = current->next;
    free(current);
    
    return (1);
    
}