#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies the first two arguments
 * @argc: number of arguments
 * @argv: array comtaines arguments
 * Return: returns 0 always (success)
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
