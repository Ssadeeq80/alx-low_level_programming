#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, fac;

	while (fac < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (fac = 3; fac < (prime / 2); fac += 2)
		{
			if ((prime % fac) == 0)
				prime /= fac;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
