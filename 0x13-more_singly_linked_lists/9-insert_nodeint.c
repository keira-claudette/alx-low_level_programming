#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to linked ist
 * @idx: potition to add new node
 * @n: data
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (temp && i < idx)
	{
		temp = temp->next;

		if (!temp)
			return (NULL);

		(temp - 1)->next = new;
		new->next = (temp + 1);
	}
	return (new);
}
