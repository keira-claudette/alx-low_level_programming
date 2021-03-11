#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to a char
 * @n: number of arguments passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list num_print;
		unsigned int i;

		va_start(num_print, n);
		for (i = 0; i < n - 1; i++)
		{
			if (!separator)
			{
				printf("%d", va_arg(num_print, unsigned int));
			}
			if (n && separator)
			{
				if (i == 0)
					printf("%d", va_arg(num_print, unsigned int));
				else
			printf("%d", va_arg(num_print, unsigned int));
			printf("%s", separator);
			}
		}
		if (i == n - 1)
			printf("%d\n", va_arg(num_print, unsigned int));
		va_end(num_print);
}
