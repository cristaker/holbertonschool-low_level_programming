#include "lists.h"
/**
 * free_listint2 - function prototype
 * @head: double pointer list
 * Return: void
 * **/

void free_listint2(listint_t **head)
{
	listint_t *temporal;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temporal = current) != NULL)
		{
			current = current->next;
			free(temporal);
		}
		*head = NULL;
	}
}
