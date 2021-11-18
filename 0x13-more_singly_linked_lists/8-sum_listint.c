#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: linked list
 * Return: integer
 * **/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
