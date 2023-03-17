#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char x[15];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		strcpy(x, "is positive");
	}
	else if (n < 0)
	{
		strcpy(x, "is negative");
	}
	else if (n == 0)
	{
		strcpy(x, "is zero");
	}

	printf("%d %s\n", n, x);

	return (0);
}
