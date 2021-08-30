#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                   the linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: -1 if value not present in array, on success, the index where the
 *           value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (size > 0 && array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);

			if (array[i] == value)
			{
				/*printf("Found %d at index %d\n", value, i);*/
				return (i);
			}

		}

	}
	return (-1);
}
