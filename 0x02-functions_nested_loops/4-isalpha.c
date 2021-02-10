#include "holberton.h"

/**
* _isalpha - checks for alphabetic characters,both lower and uppercase
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

