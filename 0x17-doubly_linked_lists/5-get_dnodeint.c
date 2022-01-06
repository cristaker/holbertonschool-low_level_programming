#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to list
 * @index: unsigned int
 * Return: NULL
 * **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (0);
}
