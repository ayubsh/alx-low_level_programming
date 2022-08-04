#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all the arguments passed to it
 * @format: the format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list alist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(alist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(alist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(alist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(alist, double)), c = 1;
			break;
		case 's':
			str = va_arg(alist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(alist);
}
