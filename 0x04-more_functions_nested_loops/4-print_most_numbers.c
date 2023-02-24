#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int i = '/';
	void _putchar();

	while (i++ < '9')
		if (i != '2' && i != '4')
			_putchar(i);

	_putchar('\n');
}
