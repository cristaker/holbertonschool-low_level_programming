#include "main.h"
/**
 * _strstr - function
 * @haystack: pointer to pointer
 * @needle: pointer to pointer 2
 * Return: a pointer
 * **/

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		c = 0;
		if (haystack[a] == needle[0])
		{
			b = a;
			while (haystack[b] == needle[c])
			{
				b++;
				c++;
			}
		}
		if (needle[c] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}
