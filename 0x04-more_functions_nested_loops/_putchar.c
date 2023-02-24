#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to stdout
 *
 * @c: the char to print
 *
 * Return: on success
 *
 * On error, -1 is returned, and set right
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
