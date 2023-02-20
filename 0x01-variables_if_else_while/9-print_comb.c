#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
	putchar(num);

	putchar(',');

	putchar(' ');
	}
	putchar('\n');

	return (0);
}
