#include "main.h"
/**
 * _islower - the main function
 *
 * @c: is the char to be checked
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
