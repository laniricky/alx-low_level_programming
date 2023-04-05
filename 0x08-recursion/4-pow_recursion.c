#include "main.h"

/**
 * _pow_recursion - Function that returns x to the power of y
 * @x: Value to be raised
 * @y: Power Value
 * Return: Result of x and y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
