#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0.
 * @n: Pointer to the bit.
 * @index: Index to set the value at - indices start at 0.
 *
 * Return: If an error occurs then -1.
 *         ELse - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
