#include <stdio.h>
/**
 * print_to_98 - print number from n to 98
 * @n: starting point
 * Return: returns void, nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("98\n");
}
