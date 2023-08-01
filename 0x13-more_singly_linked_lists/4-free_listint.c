#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t *temp, *current;
    
    temp = head;

    while (temp != NULL)
    {
        current = temp;
        temp = temp->next;
        free(current);
    }
    
}