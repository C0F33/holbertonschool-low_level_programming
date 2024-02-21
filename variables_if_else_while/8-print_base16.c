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
char b;
for (c = 0; c <= 9; c++)
putchar(c + '0');
for (b = 'a'; b <= 'f'; b++)
putchar(b);
putchar('\n');
return (0);
}
