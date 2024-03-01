#include "main.h"
/**
 * _strchr- locates char in string
 * @s: pointer to string to be analized
 * @c: character to be found
 * Return: char pointer if succesful else null
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
