#include "main.h"
/**
 * times_table - the main function
 *
 * Return: when successful
 */
void times_table(void)
{
	int n;

	int a;

	for (a = 9 ; a++ ; )
	{
		for (n = 0 ; n <= 9 ; n++)
		{
		_putchar(a * n);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		}
	}
}
