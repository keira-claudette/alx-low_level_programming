#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char c;
	int i, j, last_element;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	last_element = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[last_element];
		s[last_element--] = c;
	}
}
