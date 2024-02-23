#include "main.h"
#include <stdio.h>

/**
 *_isdigit - Decides if c is a digit
 *@c: digit or letter entered
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
