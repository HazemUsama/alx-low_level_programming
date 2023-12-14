#include "search_algos.h"

/**
 * binary_search - search for a value in an array
 * using binary search
 *
* @array: the array to check
* @size: the size of the array
* @value: the value to look for
*
* Return: the index if found the value at or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t st = 0, nd = size - 1, mid, i;

	while (st <= nd)
	{
		mid = (nd + st) / 2;
		printf("Searching in array: %lu", st);
		for (i = st + 1; i <= nd; i++)
			printf(", %lu", i);
		printf("\n");
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			st = mid + 1;
		else
			nd = mid - 1;
	}
	return (-1);
}
