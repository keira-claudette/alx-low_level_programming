#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a  linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds and -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp1 = *head;
	dlistint_t *temp2;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index == 0)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
	}
	while (*head && i < index && temp)
	{
		if (index > 0)
			temp = temp->next;
		i++;
	}

	temp2 = temp->prev;
	temp2->next = temp->next;
	free(temp);
	return (1);
}
