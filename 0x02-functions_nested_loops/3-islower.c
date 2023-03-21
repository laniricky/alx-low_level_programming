#include "main.h"

/**
 * _islower - check if char is lowercase
 * @i: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
