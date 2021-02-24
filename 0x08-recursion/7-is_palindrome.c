#include "holberton.h"
/**
 * _length - finds length of string
 * @s: string to be checked
 * Return: int
 */
int _length(char *s)
{
	if (s[0])
		return (1 + _length(s + 1));
	else
		return (0);
}

/**
 * palindrome_checker - checks if a string is a palindrome
 * @s: string to check
 * @l: length of string
 * Return: int
 */
int palindrome_checker(char *s, int l)
{
	if (l <= 1)
		return (1);

	else if (s[0] == s[l - 1])

	{
		return (palindrome_checker(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: int
 */
int is_palindrome(char *s)
{
	int len;

	len = _length(s);

	if (len <= 1)
		return (1);
	else
		return (palindrome_checker(s, 1));
}
