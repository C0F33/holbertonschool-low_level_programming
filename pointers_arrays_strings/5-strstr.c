#include "main.h"
/**
 * _strstr- locates a substring in string s
 * @haystack: string to be searched
 * @needle: string to be found
 * Return: pointer to needle in haystack or null
*/
char *_strstr(char *haystack, char *needle)
{
int *NULL = '\0';
if (*needle == '\0')
return ((char *)haystack);
while (*haystack != '\0')
{
const char *pHaystack = haystack;
const char *pNeedle = needle;
while (*pNeedle != '\0' && *pHaystack == *pNeedle)
{
pHaystack++;
pNeedle++;
}
if (*pNeedle == '\0')
return ((char *)haystack);
haystack++;
}
return (NULL);
}
