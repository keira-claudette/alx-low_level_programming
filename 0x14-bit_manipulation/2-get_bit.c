#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check for index
 * @index: position of bit to check
 * Return: value of a bit at a the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
