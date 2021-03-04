#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to a char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/* find length of s1 and s2 */
	unsigned int i, j, k, len;

	char *s3;

	len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	for (j = 0; j <= n; j++)
		len++;

/* allocate memory for s3 */
	s3 = malloc((sizeof(char) * len) + 1);

	if (s3 == NULL)
		return (NULL);

/* assign values to s3*/
	for (k = 0; k < len; k++)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s3[k] = s1[1];
		}

		for (j = 0; j <= n; j++)
		{
			s3[k] = s2[j];
		}
	}
	s3[k] = '\0';

	return (s3);
}
