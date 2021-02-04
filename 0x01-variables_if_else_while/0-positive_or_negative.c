#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - returns 0 to show success
*the number is positive,if greater than 0.
*if the number is less than 0: is negative, followed by a new line
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
{

printf("%d is positive\n", n);

}

else if (n < 0)

{

printf("%d is negative\n", n);

}

else

{

printf("%d is zero\n", n);

} return (0);

}
