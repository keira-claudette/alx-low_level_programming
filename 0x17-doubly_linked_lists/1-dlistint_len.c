#include "lists.h"
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	if (!h)
		return (0);
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
