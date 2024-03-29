#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at index 'index' (0 or 1),
 * or -1 if an error occurred (if 'index' is out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

if ((n & mask) == 0)
return (0);
else
return (1);
}
