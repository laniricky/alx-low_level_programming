#include "main.h"

/**
 * _isalpha - checks for alphabets
 * Return: 1 if c it's a letter, 0 if not s letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

