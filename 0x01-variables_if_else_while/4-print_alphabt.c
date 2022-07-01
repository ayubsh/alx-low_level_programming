#include <stdio.h>
/**
 * main - Prints the alphabet except e and q
 * Return: returns 0 always (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			x++;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
