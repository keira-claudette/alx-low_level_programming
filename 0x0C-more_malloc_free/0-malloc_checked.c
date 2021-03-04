#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that reserves memory using malloc
 * @b: byte size
 * Return: void or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

		if (ptr == NULL)
		{
			free(ptr);
				exit(98);
		}

		return (ptr);
}
