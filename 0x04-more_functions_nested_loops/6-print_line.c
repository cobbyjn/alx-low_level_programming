#include "main.h"
/**
 * print_line - main function
 *
 * @n: checks the integer
 *
 * Return: when successful
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a;

		for (a = 0 ; a <= n ; a++)
		{
			_putchar('_');
		_putchar('\n');
		}
		_putchar('\n');
	}
}
