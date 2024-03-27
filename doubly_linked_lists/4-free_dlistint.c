#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees all items in list.
 *@head: head pointer of list
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next_node = head->next;
free(head);
if (next_node == NULL || next_node->prev != head)
{
break;
}
head = next_node;
}
}
