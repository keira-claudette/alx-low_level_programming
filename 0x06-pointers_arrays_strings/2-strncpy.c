#include "holberton.h"
/**
 * _strncpy - function that copies
 * @dest: string to copy into
 * @src: string to copy into dest
 * @n: number of bytes(chars) to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (src[j] != src[n])
	{
		dest[i] = src[j];

		i++;
		j++;

	}
	return (dest);
}
