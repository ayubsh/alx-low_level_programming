#include <stdio.h>
/**
 * main - prints the sum of multiple of 5 or 3
 * Return: retuns 0 alays (succes)
 */
int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
