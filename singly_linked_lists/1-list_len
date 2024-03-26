#include <stdio.h>
#include "lists.h"
/**
print_list- prints contents
@h: list variable
@

*/
size_t list_len (const list_t *h)
{
const list_t *ptr = h;
size_t i = 0;
while (ptr != NULL)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
ptr = ptr->next;
i++;
}
return (i);
}
