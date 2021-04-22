#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to string to copy
 * @src: pointer to string to copy
 * @n: number of bytes from memory area src to be copied to memory area dest
 * Return: pointer to dest (*dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for(i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}
