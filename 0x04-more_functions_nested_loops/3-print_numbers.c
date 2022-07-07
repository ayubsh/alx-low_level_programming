#include "main.h"
/**
 * print_numbers - prints numbers form 0-9
 * Return: does not return, void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
