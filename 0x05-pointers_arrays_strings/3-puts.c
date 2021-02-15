#include "holberton.h"
/**
 * _puts - prints a string followed by a new line to the stdout
 * @str: pointer to string to output
 * _putchar prints to stdout
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{

		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
