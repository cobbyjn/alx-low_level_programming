#include "main.h"
/**
 * _strlen - print the length of a string
 *
 * @s: is a string
 *
 * Return: when successful
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
