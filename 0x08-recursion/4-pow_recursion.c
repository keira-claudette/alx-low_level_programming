#include "holberton.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to power of y.
 *
 * @x: index
 * @y: power
 * Return: -1 if y is lower than 0
 * else the value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
