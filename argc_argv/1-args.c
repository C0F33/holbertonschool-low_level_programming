#include <stdio.h>
#include "main.h"
/**
 * main - print arguments
 * @argc: count of commands
 * @argv: vector of string
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
(void) *argv;
printf("%d\n", argc - 1);
return (0);
}
