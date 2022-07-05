#include <stdio.h>
/**
 * print_to_98 - print number from n to 98
 * @n: starting point
 * Return: returns void, nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
