#include "main.h"
/**
 * print_times_table - printd the times table of n
 * @n: is the number of times table
 * Return: returns void, nothing
 */
void print_times_table(int n)
{
	int a, b, hold;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			hold = a * b;
			if (b == 0)
			{
				_putchar('0' + hold);
			}
			else if (hold < 10)
			{
				_putchar(' ');
				_putchar('0' + hold);
			}
			else
			{
				_putchar('0' + hold / 10);
				_putchar('0' + hold % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
