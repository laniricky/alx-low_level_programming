#include "main.h"

/**
 * factorial - Function to return the factorial of a number
 * @n: How many times to return the factorial
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
