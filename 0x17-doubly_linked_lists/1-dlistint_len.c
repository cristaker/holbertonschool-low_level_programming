#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: list
 * Return: always 0 succes.
 * **/

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
