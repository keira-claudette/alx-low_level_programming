#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of the list
 * @head: pointer to the link
 * @str: string elements in data type list_t
 * Return: pointer to the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;


	new_end_node = malloc(sizeof(list_t));
		if (!new_end_node)
			return (NULL);

	new_end_node->str = strdup(str);
	new_end_node->len = len;
	new_end_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_end_node;
		return (new_end_node);
	}
/*iterating to the last existing node*/
	while (temp->next)
		temp = temp->next;
	temp->next = new_end_node;
	return (new_end_node);
}
