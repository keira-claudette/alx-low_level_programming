#include "holberton.h"
/**
 *_strcat - function that appends src string to dest string
 * @dest: string to be appended to
 * @src: string that is appended
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, temp;
	char *ptr1;
	char *ptr2;

	i = 0;

	if (dest[i] == '\0')

	{
		temp = i;
	}

	ptr1 = &dest[temp];

	*ptr1 = src[0];

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
			ptr2 = &dest[0];


	return (ptr2);

}
