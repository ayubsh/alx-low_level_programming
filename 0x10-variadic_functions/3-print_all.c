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
	va_list list;
	unsigned i, j, k;
	char *str_checker;
	const char target[] = "cifs";

	va_start(list, format);

	k = 0;
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (target[j])
		{
			if ((format[i] == target[j]) && k)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				{
					printf("%c", va_arg(list, int));
					k = 1;
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(list, int));
					k = 1;
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(list, double));
					k = 1;
					break;
				}
			case 's':
				{
					str_checker = va_arg(list, char *);
					k = 1;
					if (!str_checker)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str_checker);
					break;
				}
		}
		i++;
	}

	printf("\n");

	va_end(list);
}
