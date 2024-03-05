#include "main.h"

/**
 *factorial - return a factorial of n
 *@n: entry int
 *Return: result of factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
