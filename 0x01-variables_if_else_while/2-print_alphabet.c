#include <stdio.h>
/**
 * main - Prints alphabet in lower case
 * Return: returns 0 always (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
