#include "main.h"

/**
 * binary_to_uint - converts from binary to decimal
 * @b: number in binary form
 * Return: returns the number (b) in decimal form
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int n, bnum;

	if (!b)
		return (0);

	dec = 0;

	for (n = 0; b[n] != '\0'; n++)
		;

	for (n--, bnum = 1; n >= 0; n--, bnum *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			dec += bnum;
		}
	}

	return (dec);
}
