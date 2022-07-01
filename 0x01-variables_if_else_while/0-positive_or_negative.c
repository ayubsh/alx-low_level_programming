#include <stdio.h>
#include <time.h>

/**
 * main - Prints weather n is positive negative or equal to zero
 * Return: Returns 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zer\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
