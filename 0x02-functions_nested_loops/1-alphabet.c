#include "holberton.h"

/**
*print_alphabet - prints the alphabet in lowercase followed by anew line
* return void
*/

void print_alphabet(void);
{
char a = 'a';
while (a <= 'z')

{
_putchar(a);
a++;
}
_putchar('\n');
}
