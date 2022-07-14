#include "main.h"

/**
 * _strncpy - copies string src to dest
 * @dest: string to be copied to
 * @src: the string be copied
 * @n: number of n
 * Return: return the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp;

	temp = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	putchar('\n');
	return (temp);
}
