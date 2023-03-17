#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int x;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	for (x = 0; x < 26; x++)
	{
		putchar(b[x]);
	}

	putchar('\n');

	return (0);
}
