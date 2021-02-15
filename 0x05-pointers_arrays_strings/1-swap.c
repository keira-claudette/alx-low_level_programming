#include "holberton.h"
/**
 * swap_int - swaps values of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 * @c: variable to dereference the pointers
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
