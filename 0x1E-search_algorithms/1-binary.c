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
	if (!array)
		return (-1);
	else
		return (recursive_search(array, value, 0, size - 1));
}

/**
 * recursive_search - does a binary search recursively
 * @array: the array to search
 * @value: the value to look for in the array
 * @l: the lowest index of the array to search
 * @r: the highest index of the array to search
 * Return: int, the index of the value in the array if found.
 */
int recursive_search(int *array, int value, size_t l, size_t r)
{
	size_t m;

	if (l > r)
	{
		return (-1);
	}
	print_search(array, l, r + 1);
	m = ((r - l) / 2) + l;
	if (value == array[m])
	{
		return (m);
	}
	else if (value > array[m])
	{
		return (recursive_search(array, value, m + 1, r));
	}
	else
		return (recursive_search(array, value, l, m - 1));

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
