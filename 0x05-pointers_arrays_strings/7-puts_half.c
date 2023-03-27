#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = (i + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
