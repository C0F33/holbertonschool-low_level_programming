#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func- decides on arythmtic operation
 * @s: opertor
 * Return: pointer to function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int (*get_op_func(char *s))(int, int);
{
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *ops[i].op)
return (ops[i].f);
i++;
}
return (NULL);
}
}
