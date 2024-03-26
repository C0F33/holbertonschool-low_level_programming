#include "lists.h"
#include <stdio.h>
/**
*dlistint_len - return length of list
*@h: head of list
*Return: lenght of list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
