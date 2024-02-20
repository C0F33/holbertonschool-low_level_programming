#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point.
*Desc: Print evaluation of value of n.
*Return: 0 if (success)
*/
int main(void)
{
int n, digit;
digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if
(n > 5)
printf("The last digit of %d is %d and is greater then 5\n", n, digit);
if
(n == 0)
printf("The last digit of %d is %d and is 0\n", n, digit);
else if
(n < 6)(n <= 0);
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, digit);
return (0);
}
