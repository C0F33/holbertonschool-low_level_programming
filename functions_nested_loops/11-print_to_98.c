#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from 0 to 9
 * Return: 0 if auccesful.
 * @n: variable to be printed.
*/
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
}
else if (n > 98)
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("98\n");
