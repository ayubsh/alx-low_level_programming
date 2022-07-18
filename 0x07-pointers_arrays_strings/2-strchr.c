#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to be located a charcter from
 * @c: character to be located
 * Return: pointer to the first occurenc of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return (0);
		}
	}
}
