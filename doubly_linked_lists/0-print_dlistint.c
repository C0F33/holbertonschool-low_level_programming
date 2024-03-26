#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
print_dlistint - Prints dlist  completely
@h: head of dlistint.
Return: count of node in list
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t i = 0;
while (h != NULL) 
{
 printf("%d\n", h->n);
    h = h->next;
i++;
    }
return (i);
}
