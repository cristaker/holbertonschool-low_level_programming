#include "main.h"
/**
 * leet - prototype to function
 * @s: char pointer
 * Return: char
 * **/
char *leet(char *s)
{
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				}
				}
	}
	return (s);
}
