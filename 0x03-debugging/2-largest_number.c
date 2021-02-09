#include "holberton.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest;

 if ((a > b && a!=b) && (b > c && a!=c))
{
largest = a;
}
 else if ((b > a && b!=a) && (a > c && b!=c))
{
largest = b;
}
else
{ 
  if ((c > a && c!=a) && (c > b && c!=b))
largest = c;
}

return (largest);
}
