#include <stdio.h>
#include "stdlib.h"
/**
 * main - multiply ars
 * @argc: count
 * @argv: multiplieds
 * Return: success 0
*/
int main(int argc, char *argv[])
{
int a;
int b;
int product;
if (argc > 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
product = (a * b);
printf("%d\n", product);
return (0);
}
else
printf ("Error\n");
return(1);
}
