#include "lists.h"
/**
 * add_nodeint_end - aggregate node at the end
 * @head: double pointer
 * @n: constant integer
 * Return: the addres of the new eleemnt
 * **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
		newnode->n = n;
		newnode->next = NULL;
		tmp = *head;
		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = newnode;
		}
			return (*head);
}
