#include "main.h"
/**
 * _isalpha - the main function
 *
 * @c: to be checked
 *
 * Return: 1 when lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
