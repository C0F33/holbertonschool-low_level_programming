#include <stdio.h>
/**
 * main - print arguments
 * @argc: count of commands
 * @argv: vector of string
 * Return: 0 succes
*/
int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
