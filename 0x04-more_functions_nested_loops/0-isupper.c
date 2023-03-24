#include "main.h"

/*
 *
 * _isupper - main fuction
 *
 * @c: the char to compare
 *
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
