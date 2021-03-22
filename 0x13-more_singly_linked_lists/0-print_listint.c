#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listsint list
 * @h: pointer to the head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}
