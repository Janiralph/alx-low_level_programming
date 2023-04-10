#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: large endian - 0small endian - 1
 */

int get_endianness(void)
{
	int digit = 1;


	if (*(char *) &digit == 1)
		return (1);
	else
		return (0);
}
