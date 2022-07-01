#include <stdio.h>
/**
 * main - prints all possible combination of single digit numbers
 * Return: returns 0 always (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
