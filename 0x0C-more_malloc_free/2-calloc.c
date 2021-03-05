#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byyte size
 * Return: pointer to void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

			if (ptr == NULL)

				return (NULL);

/*			for (i = 0; i < nmemb; i++)
			ptr[i] = 0; */

			return (ptr);
}
