#include "main.h"
/**
 * _strpbrk - function
 * @s: char pointer 1
 * @accept: char pointer 2
 * Return: a pointer
 * **/

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + 2);
			}
		}
	}
	return (0);
}
