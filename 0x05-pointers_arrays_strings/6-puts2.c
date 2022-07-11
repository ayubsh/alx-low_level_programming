#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other char starting from 0
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			putchar(str[len]);
		}
		len++;
	}
	putchar('\n');
}
