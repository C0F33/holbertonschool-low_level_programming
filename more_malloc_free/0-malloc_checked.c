#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- alocates memory
 * @b: amount of memory
 * Return: void if succes
*/
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
return (s);
if (s == NULL)
exit(98);
}
