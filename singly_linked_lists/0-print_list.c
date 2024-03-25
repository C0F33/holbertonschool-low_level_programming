#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    const list_t *ptr = h;
    size_t i = 0;
    
    if (ptr == NULL)
    {
        printf("[0] (nil)\n");
        return (1);
    }
    
    while (ptr != NULL)
    {
        printf("[%lu] (%s)\n", i, ptr -> str);
        ptr = ptr->next;
        i++;
    }
    return (i);
}
