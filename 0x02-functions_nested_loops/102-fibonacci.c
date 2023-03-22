#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
