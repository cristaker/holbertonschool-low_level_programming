#include "lists.h"
/**
 * add_nodeint - function to add node
 * @head: double pointer
 * @n: constant int
 * Return: the addres of the new element
 * **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = new;

	return (*head);
}
