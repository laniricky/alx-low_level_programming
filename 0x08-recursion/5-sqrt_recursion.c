#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - gets and returns natural square root of a number
 * @n: Number whose square root is to be calculated
 *
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recurses and finds natural square root
 * @n: number whose square root is to be calculated
 * @i: the iterator
 *
 * Return: Resulting square root
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}
