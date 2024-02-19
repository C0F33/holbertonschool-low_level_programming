#include <stdio.h>
int main(void)
/**
 *main- prints values of datatypes in bytes
 *return: 0 when successful
 */
{
printf("Size of a char: %d byte(s)\n"), (unsigned long) sizeof(char);
printf("Size of an int: %d byte(s)\n"), (unsigned long) sizeof(int);
printf("Size of a long int: %d byte(s)\n"), (unsigned long) sizeof(long);
printf("Size of a long long int: %d byte(s)\n"), (unsigned long) sizeof(long long int);
printf("Size of a float: %d byte(s)\n"), (unsigned long) sizeof(float);
return (0);
 
}
