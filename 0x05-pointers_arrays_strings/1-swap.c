#include "main.h"
#include <unistd.h>

/**
 * swap_int - swaps to values
 *
 * @a: the first value
 * @b: the second value
 *
 */
void  swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
