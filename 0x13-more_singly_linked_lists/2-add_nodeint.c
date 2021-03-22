#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to an array,linked list
 * @n: int in listint_t
 * Return: ointer to new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
