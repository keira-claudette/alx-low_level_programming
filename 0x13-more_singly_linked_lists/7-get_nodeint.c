#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 *@head: pointer to linked list ,head node
 *@index: index of the node,starting at 0
 * Return: nth node of a listint_t linkd list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

/*	if (!head)
	return (NULL);*/

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return(NULL);

	return (temp);
}
