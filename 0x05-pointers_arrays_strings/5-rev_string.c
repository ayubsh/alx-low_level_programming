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
	int i, len, temp;

	len = strlen(s) / 2;
	i = 0;

	while (s[i] != '\0')
	{
		temp = s[i];
		s[i] = s[len - (i + 1)];
		s[len - (i + 1)] = temp;
		i++;
	}
}
