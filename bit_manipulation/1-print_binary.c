#include "main.h"

/**
 * print_binary - represents binary version
 * @n: binary number
 * Returns: binary
 **/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) ? '1' : '0');
}
