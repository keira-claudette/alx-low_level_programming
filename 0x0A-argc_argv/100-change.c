#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: count of commands passed
 * @argv: array of pointers to commands passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int amount, change = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount > 0)
		{
			for (; amount >= 25; change++)
			{
				amount -= 25;
			}
			for (; amount >= 10; change++)
			{
				amount -= 10;
			}
			for (; amount >= 5; change++)
			{
				amount -= 5;
			}
			for (; amount >= 2; change++)
			{
				amount -= 2;
			}
			for (; amount >= 1; change++)
			{
				amount -= 1;
			}
			printf("%d\n", change);

		return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
