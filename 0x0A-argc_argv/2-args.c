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

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int a;

	for (a = 0 ; a < argc ; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
