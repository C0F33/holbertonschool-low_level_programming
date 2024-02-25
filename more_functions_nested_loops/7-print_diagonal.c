#include "main.h"
/**
 * print_diagonal - prints a line diagonaly.
 * @n: how long the line is
 * Return: void
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
