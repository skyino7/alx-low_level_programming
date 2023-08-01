#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *temp, *current;

    if (head == NULL || *head == NULL)
        return;
    
    current = *head;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    
    *head = NULL;
}