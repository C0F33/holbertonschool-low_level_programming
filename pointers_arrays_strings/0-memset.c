#include <main.h>
/**
 * _memset- sets value to
 * @s:memery to fill
 * @b:constant byte
 * @n:amount of bytes to fill
 * Return: s
*/
char *memset(char *s, char b, unsigned int n)
{
for (int i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
