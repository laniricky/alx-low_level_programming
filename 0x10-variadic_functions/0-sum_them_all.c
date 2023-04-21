#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the paramters provided.
 * @n: The number of paramters provided in the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par1;
	unsigned int i, sum = 0;

	va_start(par1, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(par1, int);
	}

	va_end(par1);

	return (sum);
}
