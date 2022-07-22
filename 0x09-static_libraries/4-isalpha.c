#include <stdio.h>
/**
 * _isalpha - checks weather c is upper or lower case
 * @c: c is an int ascii value
 * Return: returns 1 when c is upper or lower case, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
