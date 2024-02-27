#include "main.h"
/**
 * _strcat- Combines one string with the end of another string.
 * @dest: string to be combined.
 * @src: string to append.
 * Return: addres
 * */
char *_strcat(char *dest, char *src)
{
    int i, j;
    i = j = 0;
    while (dest[i] != '\0')
    {
        i++;
    
        while (src[j] != '\0')
        {
            dest[i] = src[j];
        i++;
        j++;
        }
    
    }
    dest[i] = '\0';
    return (dest);
}
