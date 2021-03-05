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
	unsigned int range, i;
	int *arr;

	if (min > max)
		return (NULL);
	range = max - min;

	arr = malloc(sizeof(int) * (range + 1));
	if (arr == NULL)
		return (arr);
	for (i = 0; i < range; i++)
		arr[i] = i + min;
	arr[range] = max;
	return (arr);
}
