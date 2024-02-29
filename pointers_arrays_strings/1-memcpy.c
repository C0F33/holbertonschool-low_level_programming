#include "main.h"
/**
 * _memcpy - compies memory area
 * @dest: destination to copy
 * @src: source memory to copy
 * @n: size of area to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
    dest[i] =  src[i];
}
return (dest);
}
