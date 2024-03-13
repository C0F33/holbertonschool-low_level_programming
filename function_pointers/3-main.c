#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- calculation
 * @argc: number of arguments
 * @argv: arguments
 * Return: Result
 */
int main(int argc, char *argv[])
{
int (*f)(int a, int b);
int a;
int b;
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
return (100);
}
printf("%d\n", f(a, b));
return (0);
}
