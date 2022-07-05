#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @c: is the number to be computed
 * Return: returns the lst digi
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	printf("%d", last_digit);
	printf("\n");

	return (last_digit);
}
