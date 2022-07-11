#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half string
 * @str: string to be halfed
 * Return: void
 */
void puts_half(char *str)
{
	int len, sec_half;

	len = strlen(str);

	sec_half = (len - 1) / 2;

	while (str[sec_half] != '\0')
	{
		putchar(str[sec_half]);
		sec_half++;
	}
}
