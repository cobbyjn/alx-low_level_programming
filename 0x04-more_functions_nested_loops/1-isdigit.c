#include "main.h"
/**
 * _isdigit - main function
 *
 * @c: checks the integer
 *
 * Return: 1 when digit and 0 when otherwise
 */
int _isdigit(int c)
{
	if (c == 0 && c <= 9)
		return (1);
	else
		return (0);
}
