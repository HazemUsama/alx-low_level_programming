#include "main.h"
#include <unistd.h>

/**
 * _islower - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
