#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
		printf("\n");
	}
	else if (a > c && c > b)
	{
		largest = a;
		printf("\n");
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("\n");
	}
	else if (b > c && c > a)
	{
		largest = b;
		printf("\n");
	}
	else if (c > a && a > b)
	{
		largest = c;
		printf("\n");
	}
	else
	{
		largest = c;
		printf("\n");
	}

	return (largest);
}
