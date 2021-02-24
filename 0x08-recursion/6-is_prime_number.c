#include "holberton.h"
/**
 * find_prime - finds prime number
 * @a: number to be checked
 * @b: number to iterate and check
 * Return: int
 */
int find_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (find_prime(a, b + 1));
}
/**
 * is_prime_number - checks for prime number
 * @n: integer to check
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
