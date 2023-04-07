#include "main.h"

/**
 * set_bit - sets to one the bit value at an index
 * @n: Points to the bit.
 * @index: Index that sets value
 * Return: status error or alternaative a -1.
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
