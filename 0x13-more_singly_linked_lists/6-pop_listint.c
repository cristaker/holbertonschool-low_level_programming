#include "lists.h"
/**
 * pop_listint - function delete head node
 * @head: list
 * Return: void
 * **/

int pop_listint(listint_t **head)
{
	int node;
	listint_t *hul;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	node = current->n;

	hul = current->next;

	free(current);

	*head = hul;

	return (node);
}
