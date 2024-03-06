#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array- creates a pointer to a array filled with chars.
*@size: How big the array should be
*@c: what the array will be filled with
* Return: 0 if succes NULL if failed.
*/
char *create_array(unsigned int size, char c)
{
char *d;
unsigned int i;
d = malloc(size * sizeof(c));
if (d == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
d[i] = c;
return (d);
}
return (NULL);
}
