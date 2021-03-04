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
	unsigned int i, j, k, len1, len2, len3;

	char *s3;

	for (i = 0; s1[i] != '\0'; i++)
		len1 = i;
	for (j = 0; s2[j] != '\0'; j++)
		len2 = j;
	{
		if (n >= len2)
			len3 = len1 + len2;
		else if (n < len2)
		{
		for (j = 0; j < n; j++)
			len2 = j;
		len3 = len1 + len2;
		}
	}
/* allocate memory for s3 */
	s3 = malloc((sizeof(char) * len3) + 1);

	if (s3 == NULL)
		return (NULL);
/* assign values to s3*/
	for (k = 0; k < len3; k++)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s3[k] = s1[1];
		for (j = 0; j <= n; j++)
		{
			s3[k] = s2[j];
		}
	}
	s3[k] = '\0';
	return (s3);
}
