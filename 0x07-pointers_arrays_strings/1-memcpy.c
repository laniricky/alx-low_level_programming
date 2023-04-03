#include "main.h"

/**
 * _memcpy - Entry point, copy memory area
 * @dest: Where the bytes are to be copied to
 * @src: Where the bytes are copied from
 * @n: number of bytes to be copied
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
