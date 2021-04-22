#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: string to be checked
 * @b: constant byte to be filled
 * @n: the first bytes in memory to be filled.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i <= n)
			s[i] = b;
	}
	return (s);


}
