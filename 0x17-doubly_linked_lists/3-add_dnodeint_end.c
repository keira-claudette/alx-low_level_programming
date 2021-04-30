#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the list
 * @n: int value of the data in nodes
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end;
	dlistint_t *temp = *head;

	new_end = malloc(sizeof(dlistint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		new_end->prev = NULL;
		*head = new_end;
		return (new_end);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_end;
	new_end->prev = (temp);

	return (new_end);
}
