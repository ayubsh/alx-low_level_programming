#include "main.h"

/**
 * cap_string - capitilises string
 * @s: string to be capilised
 * Return: returns capitilised string
 */
char *cap_string(char *s)
{
	int i, j;

	int deli[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (deli[j] == s[i])
			{
				s[i + 1] = s[i +1] - 32;
			}
		}
		i++;
	}

	return (s);
}
