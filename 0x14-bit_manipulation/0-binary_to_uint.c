#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: binary
 * Description: convert a binary to unsigned int
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, bse_2;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
	;

	for (len--, bse_2 = 1; len >= 0; len--, bse_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += bse_two;
		}
	}

	return (ui);
}
