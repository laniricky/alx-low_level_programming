#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: y
 */

int _strlen(char *s)
{

	int y = 0;

	while (*s != "\0")
	{
		y++;
		*s++;
	}
	return (y);
}
