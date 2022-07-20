#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: string to be prints
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
		return;
	}

}
