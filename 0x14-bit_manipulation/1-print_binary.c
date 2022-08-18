#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of decimal number
 * @n: number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	int c, result;

	for (c = 31; c >= 0; c--)
	{
		result = n >> c;

		if (result & 1)
			printf("1");
		else
			printf("0");
	}
}
