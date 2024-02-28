#include "main.h"
/**
 * _strcat- Combines one string with the end of another string.
 * @dest: string to be combined.
 * @src: string to append.
 * Return: addres
 *
 */
char *_strcat(char *dest, char *src)
{
for (; *dest != '\0';)
{
dest++;
}
for (; *src != '\0'; )
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
