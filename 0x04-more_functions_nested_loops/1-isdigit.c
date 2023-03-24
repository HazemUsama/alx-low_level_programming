#include "main.h"

/**
 * _isupper - Checks if a character is digit or not.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is digit, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

