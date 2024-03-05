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
(void) argc;
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int product = (a * b);
printf("%d,\n", product);
return (0);
}
