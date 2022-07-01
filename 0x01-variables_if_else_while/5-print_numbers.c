#include <stdio.h>
/**
 * main - prints number from 0-9
 * Return: returns 0 always (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
