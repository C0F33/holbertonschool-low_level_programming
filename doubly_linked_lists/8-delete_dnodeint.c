#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t
 * @head: Double pointer to the head of the dlistint_t.
 * @index: The index of the node that should be deleted. Starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
dlistint_t *to_delete = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
to_delete = *head;
*head = to_delete->next;
if (*head != NULL)
(*head)->prev = NULL;
free(to_delete);
return (1);
}
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
return (-1);
to_delete = current;
if (to_delete->next != NULL)
to_delete->next->prev = to_delete->prev;
if (to_delete->prev != NULL)
to_delete->prev->next = to_delete->next;
free(to_delete);
return (1);
}
