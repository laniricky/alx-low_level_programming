#include "main.h"

/**
 * _print_rev_recursion - Function that prints string in Reverse
 * @s: String
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
