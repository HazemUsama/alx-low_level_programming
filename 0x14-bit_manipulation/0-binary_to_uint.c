#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned interger
 *
 * @b: the binary as string
 *
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i, size = 0;

	if (b == NULL)
		return (0);

	for (size = 0; b[size] != '\0'; size++)
		if (b[size] != '0' && b[size] != '1')
			return (0);
	for (i = 0; i < size; i++)
	{
		ans |= b[i] - '0';
		if (i != size - 1)
			ans <<= 1;
	}
	return (ans);
}
