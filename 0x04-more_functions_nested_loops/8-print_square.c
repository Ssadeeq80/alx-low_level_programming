#include "main.h"

/**
 * print_square - Prints a square using the character #.
 *
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		/* Do not print last \n */
		if (++i < size)
			_putchar('\n');
	}

	_putchar('\n');
}
