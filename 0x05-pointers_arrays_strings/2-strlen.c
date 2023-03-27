#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: i the length
 */

int _strlen(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
