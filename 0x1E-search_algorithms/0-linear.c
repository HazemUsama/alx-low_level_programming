#include "search_algos.h"

/**
* linear_search - search for a value in an array
*
* @array: the array to check
* @size: the size of the array
* @value: the value to look for
*
* Return: the index if found the value at or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size && array; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

