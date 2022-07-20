#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string revers using recursion
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);
		return;
	}
}
