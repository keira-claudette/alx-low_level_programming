#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n)
	{
		va_list add;
		int sum = 0;
		unsigned int i;

		va_start(add, n);

		for (i = 0; i < n; i++)
			sum += va_arg(add, unsigned int);
		va_end(add);
		return (sum);
	}
	return (0);
}
