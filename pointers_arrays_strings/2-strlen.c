#include "main.h"

/**
 *  _strlen - main
 *  @s: string
 *  Return: i value
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
