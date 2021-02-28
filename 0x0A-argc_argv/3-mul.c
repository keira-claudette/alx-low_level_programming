#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: counts the arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * Return: int
 */

int main(int argc, char **argv)
{
	int product, num1, num2;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
