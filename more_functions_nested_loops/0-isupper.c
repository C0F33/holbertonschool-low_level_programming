#include "main.h"
#include <stdio.h>

/**
 *_isupper- Decides if c is uppercase or not.
 *@c: Letter from A to Z
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

