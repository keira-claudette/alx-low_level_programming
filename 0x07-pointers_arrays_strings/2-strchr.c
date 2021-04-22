#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to a string to be checked
 * @c: character to be checked
 * Return: pointer to the fist occurrence of c or NULL if no occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return ((s + i));
			}
		}
	}
	if (c == '\0')
	{
		i = 0;
		while (s[i] != '\0')
			i++;

		return ((s + i + 1));
	}

	return (0);
}
