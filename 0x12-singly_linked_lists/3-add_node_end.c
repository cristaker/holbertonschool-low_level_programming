#include "lists.h"
/**
 * _strlen - function to count
 * @s: char pointer
 * Return: Always 0 succes
 * **/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - function to aggregate a node at the end
 * @head: Double pointer
 * @str: constant char pointer
 * Return: node at the end
 * **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *new2;
	char *cpy = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(cpy);
	new->len = _strlen(cpy);
	new->next = NULL;
	if (*head == NULL)
	*head = new;
	else
	{
		new2 = *head;
		while (new2->next != NULL)
		{
			new2 = new2->next;
		}
		new2->next = new;
	}
	return (new);

}
