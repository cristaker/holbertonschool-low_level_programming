#include "main.h"
#include <stdio.h>
/**
 * _strdup - prototype
 * @str: string
 * Return: 0
 ***/
char *_strdup(char *str)
{
	int a = 0;
	int b = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	b = a + 1;
	if (b > 0)
	{
		str2 = (char *)malloc(sizeof(char) * b);
		if (str2 == NULL)
		{
			str2 = 0;
		}
		else
		{
			for (a = 0; a < b; a++)
			{
				str2[a] = str[a];
			}
		}
	}
	else
	{
	str2 = 0;
	}
	return (str2);
}
