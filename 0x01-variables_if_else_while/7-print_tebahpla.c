#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: returns 0 always (success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
