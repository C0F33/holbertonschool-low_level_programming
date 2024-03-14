#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of the all its parameters.
 * @n: number of elements of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum 0
 *
 * Return: if n == 0 - 0
 * Otherwise - the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
