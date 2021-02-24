#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to find factorial of
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);

		else
			return (n * factorial(n - 1));
}
