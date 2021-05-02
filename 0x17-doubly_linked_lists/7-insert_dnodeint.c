#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the linked list
 * @idx: index of the list where the new node should be added; starts at 0
 * @n: data for new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
<<<<<<< HEAD
=======
	dlistint_t *new_mid_node, *prev_node;
	dlistint_t *temp = *h;
>>>>>>> a5d952e2535b91d06e09aec35446118fd33a405e
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

<<<<<<< HEAD
	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
=======
	new_mid_node = malloc(sizeof(dlistint_t));
	if (!new_mid_node || !h)
>>>>>>> a5d952e2535b91d06e09aec35446118fd33a405e
		return (NULL);

	new->n = n;
	new->next = NULL;

<<<<<<< HEAD
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
=======
	if (*h == NULL)
	{
		*h = new_mid_node;
		new_mid_node->prev = NULL;
		new_mid_node->next = NULL;
		return (new_mid_node);
	}
	if (idx == 0 && *h)
	{
		new_mid_node->next = *h;
		(*h)->prev = new_mid_node;
		*h = new_mid_node;
		new_mid_node->prev = NULL;
		return (new_mid_node);
	}
	while (*h && i < idx && temp)
	{
		temp = temp->next;
		i++;
	}
	new_mid_node->next = temp;
	if (temp->next == NULL)
		new_mid_node->next = NULL;
	new_mid_node->prev = temp->prev;
	prev_node = temp->prev;
	prev_node->next = new_mid_node;
	return (new_mid_node);
>>>>>>> a5d952e2535b91d06e09aec35446118fd33a405e
}
