#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Description: Print the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for
 * the multiples of five print Buzz. For numbers which are multiples of
 * both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		/* Check this first */
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i++ < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
