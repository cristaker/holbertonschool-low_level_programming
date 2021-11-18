#include "lists.h"
/**
 * free_listint - function free list
 * @head: linked list
 * Return: void
 * **/

void free_listint(listint_t *head)
{
	listint_t *temporal;

	while ((temporal = head) != NULL)
	{
		head = head->next;
		free(temporal);
	}
}
