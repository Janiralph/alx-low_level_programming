#include "main.h"

/**
 * clear_bit - sets bit value at an index to 0.
 * @n: pointer to a given bit
 * @index: index at whicha value is set
 * Return: -1 for an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
