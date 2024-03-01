#include "main.h"
/**
 * _strstr- locates a substring in string s
 * @haystack: string to be searched
 * @needle: string to be found
 * Return: pointer to needle in haystack or null
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (!needle[j])
{
return (haystack + i);
}
}
return (0);
}
