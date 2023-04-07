#include "main.h"

#include "main.h"

/**
 * get_bit - get value of a bit at given index
 * @n: the value
 * @index: the index to get value starting at 0
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
