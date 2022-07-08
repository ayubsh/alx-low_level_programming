#include "main.h"

/**
 * print_line - prints n line( -)
 * @n: how many time n should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
