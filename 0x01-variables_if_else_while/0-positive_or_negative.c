#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	str x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		x = "is positive";
	}
	else if (n < 0)
	{
		x = "is negative";
	}
	else if (n == 0)
	{
		x = "is zero";
	}

	printf("%d %s\n", n, x);

	return (0);
}
