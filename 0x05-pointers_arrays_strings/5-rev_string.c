#include "main.h"
/**
 * rev_string - reverse string
 * @s: integer to check
 * Return: 0
 * **/

void rev_string(char *s)
{
	int a = 0, b = 0;
	char scopy[20];

	while (s[a])
	{
	scopy[a] = s[a];
	a++;
	}
	a = a - 1;
	while (a >= 0)
	{
	s[a] = scopy[b];
	a--;
	b++;
	}
}
