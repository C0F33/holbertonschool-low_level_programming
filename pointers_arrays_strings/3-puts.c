#include "main.h"
/**
 * _puts - print str
 * @str: string to be printed
 * Return: void
*/
void _puts(char *str)
{
while (*str)
_puts(*str);
_puts('\n');
return (0);
}
