#include "main.h"
/**
 * _puts - prints a string,
 * followed by a new line, to stdout
 * @s: string to print
 *@temp: Temporary Slot
 * Return: void
 */
void rev_string(char *s)
{
int c;
c = _strlen(s) - 1;
char t[c];
int g = 0;
for (; c >= 0;)
{
t[g] = s[c];
g++;
c--;
}
s = &t;
}
