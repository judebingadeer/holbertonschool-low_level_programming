#include "main.h"

/**
 * sqrt_helper - Finds the natural square root recursively
 * @n: Number to find the square root of
 * @i: Current candidate
 *
 * Return: Natural square root, or -1 if none exists
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 *
 * Return: Natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (sqrt_helper(n, 1));
}
