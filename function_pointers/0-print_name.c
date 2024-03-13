#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: Pointer to print name function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
