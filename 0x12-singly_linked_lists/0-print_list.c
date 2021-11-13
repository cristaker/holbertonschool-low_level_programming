#include "lists.h"
/*
 * print_list - function
 * @h: constant list_t
 * Return: number of nodes
 * */

size_t print_list(const list_t *h)
{
	size_t number;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s\n", "nil");
		else
			printf("%d %s\n", h->len, h->str);

	h = h->next;
	number++;
	}
	return (number);
}
