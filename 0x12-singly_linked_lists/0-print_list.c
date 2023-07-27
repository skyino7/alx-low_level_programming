#include "lists.h"

/**
 * print_list - function
 * @h: head of the singly linked list
 * Return: Number of Nodes in List
*/

size_t print_list(const list_t *h)
{
    size_t cnt = 0;

    while (h != NULL)
    {

        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
            printf("[%d] %s\n", h->len, h->str);
        
        cnt++;
        h = h->next;
        
    }

    return (cnt);
}
