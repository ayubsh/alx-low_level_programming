#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len;

	len = strlen(s);
	len--;

	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
