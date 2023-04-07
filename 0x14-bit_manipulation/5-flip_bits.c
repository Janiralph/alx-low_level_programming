#include "main.h"

/**
 * flip_bits - counts bits to be flipped
 * @n: the number to be flipped
 * @m: quantity to flip number to
 * Return: bits needed to flip from a number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor &);
		xor >>= 1;
	}

	return (bits);
}
