#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
