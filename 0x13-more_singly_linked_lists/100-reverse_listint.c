#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: linked list
 * Return: pointer
 * **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = p;
	return (*head);
}
