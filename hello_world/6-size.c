#include <stdio.h>
int main(void)
{
int intType;
float floatType;
long longType;
long long longlongType;
char charType;

printf("Size of a char: %zu byte\n"), (unsigned long) sizeof(charType));
printf("Size of an int: %zu bytes\n"), (unsigned long) sizeof(intType));
printf("Size of a long long: %zu bytes\n"), (unsigned long) sizeof(longlongType));
printf("Size of a long: %zu bytes\n"), (unsigned long) sizeof(longType));
printf("Size of a float: %zu bytes\n"), (unsigned long) sizeof(floatType));
return (0);
}

