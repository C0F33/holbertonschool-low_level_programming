#include "3-calc.h"
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
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (!f)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", f(a, b));
return (0);
}
