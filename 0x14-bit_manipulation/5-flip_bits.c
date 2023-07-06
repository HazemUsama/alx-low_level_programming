#include "main.h"

/**
 * flip_bits - calc the number of bits you would need to flip to get from one number to another
 *
 * @n: ...
 * @m: ...
 *
 * Retrun: number of bits need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (__builtin_popcount(n ^ m));
}
