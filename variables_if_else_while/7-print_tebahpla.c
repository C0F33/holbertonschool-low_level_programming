#include <stdlib.h>
#include <stdio.h>
/**
*main - acces point
*Description: print numbers 0 to 9
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);

}
