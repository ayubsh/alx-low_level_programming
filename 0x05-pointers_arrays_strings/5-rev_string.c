#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints the reverse of the input
 * @s: input to be reversed
 * * Return: void
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s) - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		len--;
	}
	putchar('\n');
}
