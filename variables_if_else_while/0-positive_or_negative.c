#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main-print if value of n is either positive ngative or equal to zero.
 * return: if succesful return 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*print if n = zero*/
	if (n == 0)
		printf("%d is zero\n", n);
		/*print if n > 0*/
	if (n > 0)
		printf("%d is positive\n", n);
		/*print if n < 0*/
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

