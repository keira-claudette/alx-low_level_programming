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
	int i, j, flag;

/* Iterate through s*/
		for (i = 0; s[i] != '\0'; i++)
		{
/*interate through accept*/
			flag = 0;

			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					flag = 1;
				}
			}
			if (flag == 0)
			{
				return (s);
			}
		}
	return (0);
}
