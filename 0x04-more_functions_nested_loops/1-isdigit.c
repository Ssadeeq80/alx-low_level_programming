#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: Number to be checked.
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > '/' && c < ':')
		return (1);

	return (0);
}
