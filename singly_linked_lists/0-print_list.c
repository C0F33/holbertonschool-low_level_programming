#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
const list_t *ptr = h;
size_t i = 0;
while (ptr != NULL)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
i++;
}
return (i);
}
