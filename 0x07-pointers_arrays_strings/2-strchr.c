#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to a string to be checked
 * @c: character to be checked
 * Return: pointer to the fist occurrence of c or NULL if no occurrence
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
