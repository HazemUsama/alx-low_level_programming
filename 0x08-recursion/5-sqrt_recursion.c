#include "main.h"

/**
 * _sqrt_helper - returns the natural square root of a number
 *
 * @low: lowest number to be evaluated
 * @high: highest number to be evaluated
 * @n: number to be evaluated
 *
 * Return: natural square root of n or -1
 * if n does not have a natural square root
 */
int _sqrt_helper(long low, long high, long n)
{
	long mid;

	if (low <= high)
	{
		mid = (high - low) / 2 + low;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (_sqrt_helper(low, mid - 1, n));
		return (_sqrt_helper(mid + 1, high, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(0, n, n));
}
