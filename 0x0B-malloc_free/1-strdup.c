#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocates new space in memory with a copy of the springs
 * @str: array of chars
 * Return: pointer to a char
 */
char *_strdup(char *str)
{
/* Find length of string */
	int i, length, j;

	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		length = i;
/*allocate memory for copy of string*/
	ptr = (char *)malloc(length * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (*str == '\0')
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
