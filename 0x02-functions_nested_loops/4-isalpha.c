#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @i: the character to be checked
 * Return: 1 if c it's a letter, 0 if not s letter
 */
int _isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}

