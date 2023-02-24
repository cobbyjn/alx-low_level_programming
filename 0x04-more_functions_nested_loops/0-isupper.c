#include "main.h"
#include <stdio.h>
/**
 * _isupper - main function
 *
 * @c: checks the variable
 *
 * Return: 1 when c is uppercase and 0 when lowercase
 */
int _isupper(int c)
{

	if (c == 'A' && c <= 'Z')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
