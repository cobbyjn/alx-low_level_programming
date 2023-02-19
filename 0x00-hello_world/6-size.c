#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0 when it is seccessful
 */
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

printf("Size if int: %ld bytes\n", sizeof(integerType));
printf("Size if float: %ld bytes\n", sizeof(floatType));
printf("Size if double: %ld bytes\n", sizeof(doubleType));
printf("Size if char: %ld bytes\n", sizeof(charType));
return (0);
}
