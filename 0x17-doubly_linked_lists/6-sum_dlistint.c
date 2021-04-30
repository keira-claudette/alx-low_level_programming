#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t linked list
 * @head: pointer to the first node of the linked list
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head && head->next)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
