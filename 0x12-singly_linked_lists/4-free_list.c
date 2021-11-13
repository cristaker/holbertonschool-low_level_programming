#include "lists.h"
/**
 * free_list - function
 * @head: pointer
 * Return: void
 * **/

void free_list(list_t *head)
{
	list_t *cpy;

	while (head)
	{
		cpy = head;
		head = head->next;
		free(cpy->str);
		free(cpy);
	}
}
