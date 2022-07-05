#include "main.h"
/**
 * times_table - printd the times table of 9
 * Return: returns void, nothing
 */
void times_table(void)
{
	int a, b, hold;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
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
