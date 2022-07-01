#include <stdio.h>
/**
 * main - print single digit number in 10
 * Return: returns 0 always (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
