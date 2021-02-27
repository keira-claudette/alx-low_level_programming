#include <stdio.h>
#include "holberton.h"
/**
 * main - prints program name
 * @argc: counts the arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * Return: int
 */

int main(int argc, char **argv)
{

	if (argc >= 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
