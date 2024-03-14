#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the numbers in function parameters
 * @n: number of arguments
 * Return: the sum of all the numbers in function parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        int x = va_arg(args, int);
        sum += x;
    }

    va_end(args);

    return (sum);
}
