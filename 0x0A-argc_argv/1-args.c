#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: list containing arguments
 * Return: returns 0 always (successs)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
