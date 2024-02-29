#include "main.h"
/**
 * _memset- sets value to
 * @s:string
 * @b:start
 * @n:amount
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
