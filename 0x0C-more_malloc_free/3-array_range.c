#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates array of integers
 * @min: integer
 * @max: interger
 * Return: pointer to an interger
 */
int *array_range(int min, int max)
{
	int *s;

	s = malloc(sizeof(int) * 2);
		if (min > max)
			return (NULL);
	if (s == NULL)
		return (NULL);

	*s = min;
	*(s + 1) = max;

	return (s);
}
