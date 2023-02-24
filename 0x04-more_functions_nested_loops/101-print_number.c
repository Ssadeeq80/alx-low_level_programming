#include "main.h"

/**
 * print_number - Print an integer
 *
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int num, place_value = 1, reversed_num = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find highest place value of n*/
	num = n;
	while ((num /= 10) > 0)
	{
		place_value *= 10;
	}

	/* Reverse the number */
	num = n;
	while (num > 0)
	{
		reversed_num += (num % 10) * place_value;
		num /= 10;
		place_value /= 10;
	}

	/* Print number run at least once*/
	num = reversed_num;
	do {
		_putchar('0' + (num % 10));
		num /= 10;
	}
	while ((num > 0))
		;
}
