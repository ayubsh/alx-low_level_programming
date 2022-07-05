#include <stdio.h>
/**
 * print_sign - checks the parity of c
 * @c: c is an int to be checked
 * Return: return 1, or 0 or -1
 */
int print_sign(int c)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (c == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
