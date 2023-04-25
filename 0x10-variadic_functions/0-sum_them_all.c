#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of all its parameters
 *
 * @n: the number of parameters
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0, sum = 0;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
