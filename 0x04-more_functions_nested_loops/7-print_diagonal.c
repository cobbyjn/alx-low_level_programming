#include "main.h"
/**
 * print_diagonal - main function
 *
 * @n: an ingeger
 *
 * Return: when successful
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a;

		int b;

		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < n ; b++)
			{
				if (b == a)
				_putchar('\\');

				else if (b < a)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
