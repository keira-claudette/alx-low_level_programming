#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* print_list - prints all the elements of a list_list
* @h: pointer to a list_h list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}

	return (count);
}
