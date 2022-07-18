#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to be located a charcter from
 * @c: character to be located
 * Return: pointer to the first occurenc of c
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}	
		
		s++;
	}

	return (0);
}
