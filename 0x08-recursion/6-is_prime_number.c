#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - outputs whether an integer is a prime number or not
 * @n: integer to evaluate
 *
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}

/**
 * find_prime - calculate if a number is prime in recursion
 * @n: integer to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime and 0 if not
 */
int find_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (find_prime(n, i - 1));
}
