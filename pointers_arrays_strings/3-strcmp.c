#include "main.h"
/**
* _strcmp - compares 2 strings by subtractig
* @s1: string to be compared 1
* @s2: string to be compared 2
* Return: subtracted amount of space between s1 and s2.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

