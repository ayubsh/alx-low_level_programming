#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: array containing all arguments
 * Return: returns 0 always (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
