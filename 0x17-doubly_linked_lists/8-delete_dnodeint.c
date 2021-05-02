#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a  linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds and -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
