#include "holberton.h"

/**
*function prints the alphabet in lowercase followed by a new line
* return type is void
*/

void print_alphabet(void)
{
char a = 'a';

while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
