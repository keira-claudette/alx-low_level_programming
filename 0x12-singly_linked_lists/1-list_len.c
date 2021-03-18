#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* list_len - function that returns number of elements in a linked list
* @h: pointer to the linked list
* Return: number of elements in the linked list h
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
