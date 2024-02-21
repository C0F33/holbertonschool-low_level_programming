#include <stdlib.h>
#include <stdio.h>
/**
*main - acces point
*Description: print base 16 numbers
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar((c % 10) + '0');
if (c == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('$');
return (0);
}
