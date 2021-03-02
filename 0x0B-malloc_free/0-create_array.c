#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with char c
 * @size: number of chars to reserve memory for
 * @c: char to initialize array
 * Return: pointer to char or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		ptr = malloc(size);

		for (i = 0; *ptr; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}

}
