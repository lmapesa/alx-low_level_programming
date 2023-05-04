#include "main.h"

/**
 * flip_bits - Count no# of bits needed to be
 *             flipped to get from one no# to another.
 * @n: The no#
 * @m: The no# to flip n to
 *
 * Return: The necessary no# of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
