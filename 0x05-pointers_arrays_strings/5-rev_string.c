#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints the reverse of the input
 * @s: input to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len;

	len = strlen(s);
	len--;

	while (len >= 0)
	{
		*s = s[len];
		len--;
	}
	putchar('\n');
}
