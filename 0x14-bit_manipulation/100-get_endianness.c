#include "main.h"

/**
 * get_endianness - Check the endianness
 *
 * Return: If big-endian then 0.
 *         If little-endian then 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
