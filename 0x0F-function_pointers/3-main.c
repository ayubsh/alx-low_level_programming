#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the entry point
 * @args: number of cmnld arguments
 * @argv: array containing cmnld arguments
 * Return: returns 0 always success
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*uniFucntion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	uniFucntion = get_op_func(argv[2]);

	if (!uniFucntion)
	{
		printf("Error\n");
		exit(99);
	}


	res = uniFucntion(a, b);

	printf("%d\n", res);

	return (0);
}
