#include "lists.h"
/**
 * listint_len - lenght from nodes
 * @h: constant pointer
 * Return: number of elements
 * **/

size_t listint_len(const listint_t *h)
{
	size_t numbernodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numbernodes++;
	}
	return (numbernodes);
}
