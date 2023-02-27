#include <stdio.h>

/**
 * print_array - Prints elements of an array of integers
 *
 * @a: Array of integers
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	/* Use for loop as we know number of iterations */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* If at last element, do not print comma */
		if (i != n - 1)
			/* Print comma */
			printf(", ");
	}

	printf("\n");
}
