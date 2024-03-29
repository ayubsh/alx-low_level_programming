#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed form arguments
 * @separator: string separator to be used
 * @n: number of arguments passsed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *checker;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		checker = va_arg(list, char *);
		if (checker)
		{
			printf("%s", checker);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
