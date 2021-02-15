#include "holberton.h"
/**
 *print_rev - prints string in reverse
 * @s: pointer to string
 *@i: index for elements in string,in loop for counting length of string.
 *@j: variable for second loop for printing in reverse with regard to index.
 *@last_char: assigns index for null byte to j.
 */
void print_rev(char *s)
{
	int i;
	int j;
	int last_char;

	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	last_char = i;

	j = last_char - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
	}

	j--;

	_putchar('\n');
}
