#include "main.h"
/**
 * print_times_table - main function
 *
 * @n: parameter
 *
 * Return: when successful
 */
void print_times_table(int n)
{
	int a;

	if (n >= 0 && n <= 15)
	{
		for (a = n ; a <= 15 ; a++)
		{
			_putchar(a * n);
		}
	}
	else if (n > 15 || n < 0)
		_putchar(' ');
}
