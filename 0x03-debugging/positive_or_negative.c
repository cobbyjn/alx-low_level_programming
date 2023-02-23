#include "main.h"
/**
 * positive_or_negative - main function
 *
 * @i: to be checked
 *
 * Return: 0 when successful
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is negative", i);
}
