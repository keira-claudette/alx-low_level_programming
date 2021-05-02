#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes head note and returns the node's data n
 * @head: pointer to linked list
 * Return: data in head node
 */

int pop_listint(listint_t **head)
{
	int t = (*head)->n;
/**	listint_t *temp;**/

	if (!head || !*head)
		return (0);
/**	temp = (*head)->next;**/
	free(*head);
/**	*head = temp;**/

	return (t);
}
