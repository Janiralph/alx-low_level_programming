#include "main.h"

/**
 * flip_bits - counts bits to be flipped
 * @n: the number to be flipped
 * @m: quantity to flip number to
 * Return: bits needed to flip from a number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counter = 0;

	while (difference)
	{
		counter += difference & 1;
		difference >>= 1;
	}

	return (counter);
}
