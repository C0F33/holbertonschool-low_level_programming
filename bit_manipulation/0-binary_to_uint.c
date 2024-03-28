#include <stdio.h>
#include <string.h>
#include <math.h>
/**
*binary_to_uint - converts binary to unsigned int
*@b: string to be converted
*Return: converted int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int length, i;
if (!b)
return (0);
length = strlen(b);
for (i = 0; i < length; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
{
num += pow(2, (length - i - 1));
}
}
return (num);
}
