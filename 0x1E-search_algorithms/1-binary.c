#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *  binary_search - searches for a value in a sorted array of integers
 *                    using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: -1 if array is NULL or value not present. On success, returns the
 *         index of the value in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int l, i, r, m;
	int *ptr;

	if (array && size > 0)
	{

		l = 0;
		i = l;
		r = size - 1;
		m = (l + r) / 2;
		if (l > r)
		{
			return (-1);
		}
		print_search(&array[i], l, size);
		if (value > array[m])
		{
			l = m + 1;
			i = l;
			ptr = &array[l];
			return (binary_search(ptr, (r - l + 1), value));
		}
		else if (value < array[m])
		{
			r = m - 1;
			ptr = &array[l];
			return (binary_search(ptr, (r - l + 1), value));
		}
		else
			return (m);
	}
	else
		return (-1);
}

/**
 * print_search - prints the search process
 * @array: the array
 * @size: size of the array
 * @l: index of the first element in the sub-array to search
 * Return: Void
 */
void print_search(int *array, unsigned int l, size_t size)
{
	unsigned int i = l;

	printf("Searching in array:");
	for (; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
		{
			printf(",");
		}
		else
			printf("\n");
	}
}
