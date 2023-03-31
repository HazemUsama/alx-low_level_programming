#include "main.h"

/**
 * reverse_array - reverse the content of the array
 * @a: array of numbers
 * @n: the size of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
