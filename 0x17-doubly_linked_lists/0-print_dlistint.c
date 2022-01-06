#include "lists.h"
/**
 * print_dlistint - function that prints all the element
 * @h: pointer to list
 * Return: number of nodes
 * **/

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
