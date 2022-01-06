#include "lists.h"
/**
 * free_dlistint - function that frees
 * @head: pointer to list
 * Return: Alays 0
 * **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
