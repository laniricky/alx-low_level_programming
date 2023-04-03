#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: address of the memory to print
 * @b: Character to be printed
 * @n: Size of memory to be printed
 * Return: Value of characters
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
