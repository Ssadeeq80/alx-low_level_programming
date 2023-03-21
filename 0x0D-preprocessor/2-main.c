#include <unistd.h>
/**
 * main - Code entry point
 *
 * Description: a program that prints the name of the file it was compiled from
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = __FILE__;
	char newLine = '\n';

	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}

	write(1, &newLine, 1);
	return (0);
}
