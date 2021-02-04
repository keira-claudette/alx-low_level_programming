#include <stdio.h>

/**
*main - prints lowercase and uppercase using putchar
*Return: 0;
*/

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z') /*print lowercases a-z*/
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z') /*print uppercase A-Z*/
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
