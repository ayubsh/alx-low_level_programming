#include "main.h"

/**
 * string_toupper - turns input to upper case
 * @s: input to be converted
 * Return: returns converted string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
