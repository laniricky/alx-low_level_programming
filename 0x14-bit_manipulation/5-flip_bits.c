#include "main.h"

/**
 * flip_bits - count the number of bits to change
 * @n: first value
 * @m: second value
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
		{
			count++;
		}
	}

	return (count);
}
