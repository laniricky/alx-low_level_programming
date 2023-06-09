#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Make a copy of a given paramenter
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		x[r] = str[r];

	return (x);
}
