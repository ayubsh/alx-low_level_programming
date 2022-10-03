#include <stdio.h>
/**
 * _abs - computes the absolute value
 * @c:  containes value
 * Return: returns c, 0 or -c
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (0);
	}
}
