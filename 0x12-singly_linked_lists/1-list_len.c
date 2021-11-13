#include "lists.h"
/**
 * list_len - function
 * @h: constant list
 * Return: number of elements
 * **/

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
