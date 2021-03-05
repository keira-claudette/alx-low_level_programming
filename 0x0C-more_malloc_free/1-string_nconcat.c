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
	unsigned int i, len, len1;

	char *s3;

	len = 0;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len++;
	len1 = len;
	if (s2 != NULL)
		if (sizeof(s2) < n)
			for (i = 0; s2[i] != '\0'; i++)
				len++;
		if (sizeof(s2) > n)
			for (i = 0; i < n; i++)
				len++;

/* allocate memory for s3 */
		s3 = malloc((sizeof(char) * (len + 1)));

	if (s3 == NULL)
		return (NULL);
/* assign values to s3*/
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (; i < len; i++)
		s3[i] = s2[i - len1];
			s3[i] = '\0';

	return (s3);

}
