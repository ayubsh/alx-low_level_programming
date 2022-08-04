#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: number of arguments passed
 * Return: the sum of arguemnets passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list alist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(alist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(alist, int);

	va_end(alist);

	return (sum);
}
