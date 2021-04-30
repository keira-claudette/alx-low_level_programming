#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linkned list
 * @head: pointer to the linked list, also pointer to the first node
 * @index: position of the nth node
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
