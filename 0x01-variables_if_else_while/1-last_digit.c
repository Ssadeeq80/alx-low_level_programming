#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>



/**
 *main-program entry point
 *
 *Return:0 if no error.
 */
int main(void)
{
	int n;
	/* declaring string to use letter */
	int lstring;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstring = n % 10;
	if (lstring > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstring);
	else if (lstring == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstring);
	else if (lstring < 6 && lstring != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n lstring);
	/* Return O */
	return (0);
}
