#include "main.h"

/**
 * get_bit - return the value of a bit in a decimal
 * @n: number to search
 * @index: index of a bit
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
