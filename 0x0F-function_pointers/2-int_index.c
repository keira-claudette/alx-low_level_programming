#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of ints to iterate
 * @size: size of array
 * @cmp: pointer to a function that compares
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
