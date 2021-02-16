#include "holberton.h"
/**
 * int_strlen - returns length of string
 * @s: string to be checked
 * @i: index of elements of the array
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	++i;
	}
	return (i);
}
