#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: The number of _ characters to be printed
 */
void print_line(int n)
{
	int i = 0;

	while (i++ < n && n > 0)
		_putchar('_');

	_putchar('\n');
}
