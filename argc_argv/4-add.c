#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- add ints in argc
 * @argc: nums to be added
 * @argv: Individual values
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0 && *argv[i] != '0')
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
}
else
{
printf("0\n");
return (1);
}
printf("%d\n", sum);
return (0);
}
