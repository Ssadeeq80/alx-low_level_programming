#include "main.h"

/**
 * more_numbers - Print the numbers 0-14, 10 times
 */
void more_numbers(void)
{
	int  i = 0, j;

	while (i++ < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
