#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: large endian - 0small endian - 1
 */
int get_endianness(void);
{
	int num = 1;
	char *endian = (cchar *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
