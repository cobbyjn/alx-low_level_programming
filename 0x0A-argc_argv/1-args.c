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

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
