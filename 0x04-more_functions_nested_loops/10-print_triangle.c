#include "main.h"
/**
 * print_triangle - prints triangle using # symbol
 * @size: the size of the trianle
 * Return: void
 */
void print_triangle(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
