#include "holberton.h"
/**
 * _strpbrk - functon that searches a string for any of a set of bytes
 * @s: pointer to a string to search
 * @accept: pointer to a string to check for
 * Return: pointer to the byte in s that matches ones of the bytes in accept or
 * NUll if no such byte exists
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
