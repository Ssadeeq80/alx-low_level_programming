#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * is_positive - Check if a number is greater than 0
 * Return:0 if the number is positive. 0 otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative", n);
	return (0);
}
