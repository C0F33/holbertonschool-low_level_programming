#include "main.h"
/**
 * _strncat - 
 * Return: pointer positions start of string
 * @dest:
 * @src:
 * @n:
*/
char *_strncat(char *dest, const char *src, int n) {
    char *start = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';

    return start;
}
