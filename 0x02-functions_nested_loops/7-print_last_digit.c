#include "main.h"
/**
 * print_last_digit - the main function
 *
 * @j: checks the value
 *
 * Return: when successful
 *
 */
int print_last_digit(int j)
{
	int jus;

	jus = j % 10;

	if (j < 0)
		jus = -jus;

	_putchar(jus + '0');

	return (jus);
}
