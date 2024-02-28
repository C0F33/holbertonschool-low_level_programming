#include "main.h"

/**
 * _strncat - concatenates two strings, limiting the number of bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be copied from src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (start);
}
