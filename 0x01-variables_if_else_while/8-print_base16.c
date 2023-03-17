#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (k = 'a'; k < 'g'; k++)
	{
		putchar(k);
	}

	return (0);
}
