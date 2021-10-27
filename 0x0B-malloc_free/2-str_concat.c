#include "main.h"
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: char 1
 * @s2: char 2
 * Return: Always 0
 * **/

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c1 = 0;
	int c2 = 0;
	int total = 0;
	char *str;
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		while (s1[a] != '\0')
		{
			c1++;
			a++;
		}
		while (s2[b] != '\0')
		{
			c2++;
			b++;
		}
		total = (c1 + c2) + 1;
		str = malloc(sizeof(char) * total);

		if (str == NULL)
			str = 0;
		else
		{
			b = 0;
			for (a = 0; a < total; a++)
			{
				if (a < c1)
					str[a] = s1[a];
				else
				{
					str[a] = s2[b];
					b++;
				}
			}
		}
		return (str);
}
