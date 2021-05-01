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
	dlistint_t *new_mid_node, *prev_node;
	dlistint_t *temp = *h;
	unsigned int i;

	new_mid_node = malloc(sizeof(dlistint_t));
	if (!new_mid_node || !h)
		return (NULL);

	new_mid_node->n = n;

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
	if (!temp)
		new_mid_node->next = NULL;
	new_mid_node->prev = temp->prev;
	prev_node = temp->prev;
	prev_node->next = new_mid_node;
	return (new_mid_node);
}
