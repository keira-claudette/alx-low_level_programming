#include "holberton.h"
/**
 *_strcat - function that appends src string to dest string
 * @dest: string to be appended to
 * @src: string that is appended
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
