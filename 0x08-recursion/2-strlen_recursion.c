#include "main.h"

/**
 * _strlen_recursion - Function that returns length of a string
 * @s: String whose length is to be determined
 * Return: Measure of length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
