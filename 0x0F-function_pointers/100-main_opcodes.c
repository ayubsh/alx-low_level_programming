#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints operation code
 * @argv: array comtaining cmdln arguments
 * @argc: size of argv
 * Return: returns 0 always success
 */

int main(int argc, char *argv[])
{
	char *array;
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}

		printf("%02hhx ", array[i]);
	}

	return (0);
}
