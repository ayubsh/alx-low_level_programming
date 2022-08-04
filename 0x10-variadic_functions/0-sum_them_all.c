#include <stdarg.h>

/**
 * sum_them_all - sums all its arguments
 * @n: number of arguments passed
 * Return: the sum of arguemnets passed
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	return (sum);
}
