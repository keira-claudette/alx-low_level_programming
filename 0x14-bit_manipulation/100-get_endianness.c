#include "holberton.h"

/**
 * get_endianness - checks the endiannes of a machine
 * Return: byte stored at first memory location
 */

int get_endianness(void)
{
	int i = 2;
	char *c;

	c = (char *) &i;
	return (*c);
}
