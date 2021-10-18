#include "main.h"
/**
 * _strchr - function to print
 * @s: integer 1
 * @c: integer 2
 * Return: Always 0 (Succes)
 * **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
