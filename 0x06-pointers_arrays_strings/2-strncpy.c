#include "holberton.h"

/**
 * _strncpy - function that copies
 * @dest: string to copy into
 * @src: string to copy into dest
 * @n: number of bytes(chars) to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
