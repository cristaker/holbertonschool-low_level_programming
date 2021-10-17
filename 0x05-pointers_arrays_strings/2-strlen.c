#include "main.h"

/**
 * _strlen - function
 * @s: input to string
 * Return: lenght of a string
 * **/

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	{
		return (c);
	}
}
