#include <stdio.h>
#include "main.h"
/**
*binary_to_uint - converts binary to int.
*@b: string to be converted
*Return: converted num
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	unsigned int base = 1;
int i = 0;
int len = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			val += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
	}

	return (val);
}
