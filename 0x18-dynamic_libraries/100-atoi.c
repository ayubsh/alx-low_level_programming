#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - converts string to number
 * @s: string to be converted
 * Return: converted number
 */
int _atoi(char *s)
{
	int i, number, sign;

	number = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\n')
	{
		if (s[i + 1] == ' ')
		{
			break;
		}
		if (s[0] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (s[i] - 48) + number * 10;
		}

		i++;
	}

	return (number * sign);
}

