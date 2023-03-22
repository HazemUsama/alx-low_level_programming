	#include "main.h"
#include <unistd.h>

/**
 * _abs - main function
 *
 * @n: character to compare.
 *
 * Return: the abs of the number
 *
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
