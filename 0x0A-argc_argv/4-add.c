#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * isnum - checks weather input is number
 * @s: input to be checked
 * Return: 0 or 1 depending weather input is number of not
 */

int isnum(char *s)
{
	unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}

	return (1);
}


/**
 * main - sums up arguments
 * @argc: number of arguments
 * @argv: array containing all arguments passed
 * Return: 0 is succed or 1 falier
 */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}


	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
