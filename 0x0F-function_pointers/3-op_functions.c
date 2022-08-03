#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds tro number
 * @a: first number
 * @b: second number
 * Return: returns the sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: returns the diffrence of the two numbers
 */

int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);
	return (diff);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: returns the product of two numbers
 */

int op_mul(int a, int b)
{
	int prod;

	prod = (a * b);

	return (prod);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: returns the quetion of two numbers
 */

int op_div(int a, int b)
{
	int ques;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ques = (a / b);
	return (ques);
}

/**
 * op_mod - takes the module of a and b
 * @a: first number
 * @b: second number
 * Return: returns the remainder of dividing a and b
 */

int op_mod(int a, int b)
{
	int remain;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	remain = (a % b);

	return (remain);
}
