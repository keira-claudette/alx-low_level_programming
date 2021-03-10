#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name:name to be printed
 * @f: pointer to a function that takes pointer to char
 * as parameter and returns a void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
