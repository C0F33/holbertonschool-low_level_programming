#include <stdio.h>
int main(void)
{
printf("Size of a char: %d byte(s)\n"), (unsigned long) sizeof(charType);
printf("Size of an int: %d byte(s)\n"), (unsigned long) sizeof(intType);
printf("Size of a long int: %d byte(s)\n"), (unsigned long) sizeof(longType);
printf("Size of a long long int: %d byte(s)\n"), (unsigned long) sizeof(longlongType);
printf("Size of a float: %d byte(s)\n"), (unsigned long) sizeof(floatType);
return (0);
}

