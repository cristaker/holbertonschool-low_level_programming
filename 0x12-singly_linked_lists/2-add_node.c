#include "lists.h"
/**
 * _strlen - function
 * @s: char pointer
 * Return: 0 if i doesnot exist.
 * **/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node -function for aggregate node
 * @head: double pointer
 * @str: constant char
 * Return: addres
 * **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *cpy = strdup(str);

	new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);
		new->str = strdup(cpy);
		new->len = _strlen(cpy);
		new->next = *head;
		*head = new;
		return (new);
}
