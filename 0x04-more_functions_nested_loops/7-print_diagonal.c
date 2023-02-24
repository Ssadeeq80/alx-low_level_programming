#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');

		/* Do not print last \n */
		if (++i < n)
			_putchar('\n');
	}

	_putchar('\n');
}
