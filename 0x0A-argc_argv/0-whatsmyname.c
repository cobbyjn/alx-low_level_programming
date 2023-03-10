#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 *
 * @argc: the number of arguments
 *
 * @argv: the array of arguments
 *
 * Return: when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
