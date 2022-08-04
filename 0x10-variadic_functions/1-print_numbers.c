#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed as arguemnts
 * @separator: is specifice how printed numbers are separated
 * @n: size of the numbers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(list, unsigned int), separator);
	}
	printf("%d\n", va_arg(list, unsigned int));

	va_end(list);
}
