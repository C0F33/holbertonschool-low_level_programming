#include "main.h"
#include <string.h>
/**
 * puts_half - prints characters divisible by 2.
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
int i;
int n;
i = strlen(str);
{
for (n = 0; n < i; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
}
_putchar('\n');
}
