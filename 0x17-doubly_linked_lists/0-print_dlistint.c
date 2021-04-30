#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	if (!h)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
