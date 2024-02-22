#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
print_alphabet(); /** Call print_alphabet function to print the alphabet once */
}
}
