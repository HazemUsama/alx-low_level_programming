#include "main.h"

/**
 * flip_bits - number of bits need to flip
 *
 * @n: ...
 * @m: ...
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (__builtin_popcount(n ^ m));
}
