#include "main.h"
/**
 * _strchr- locates char in string
 * @s: pointer to string to be analized
 * @c: character to be found
 * Return: char pointer if succesful else null
*/
char *_strchr(char *s, char c)
{
char *NULL = '\0';
while (*s != '\0')
{
if (*s == c)
return ((char *)s);
s++;
}
return (NULL);
}
