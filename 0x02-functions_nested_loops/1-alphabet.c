#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lower case
 * Return: returns void nothing
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
