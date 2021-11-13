#include "lists.h"
/**
 * print_list - function
 * @h: constant list_t
 * Return: number of nodes
 * **/

size_t print_list(const list_t *h)
{
	unsigned int number = 0;
	const list_t *a;

	a = h;
		while (a != NULL)
	{
		if (a->str == NULL)
			printf("[0] nil\n");
		else
			printf("[%d] %s\n", a->len, a->str);

	a = a->next;
	number++;
	}
	return (number);
}
