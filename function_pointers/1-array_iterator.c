#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterator for array elements
 * @array: array of functions
 * @size: size of array
 * @action: pointer to function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
