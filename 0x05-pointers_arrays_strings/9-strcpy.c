#include "main.h"
/**
 * _strcpy - function to print
 * @dest: integer 1
 * @src: integer 2
 * Return: dest
 * **/
char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (src[a] != 0)
	{
		a++;
		b++;

		for (a = 0; a < b; a++)
		{
			dest[a] = src[a];
		}
	}
	dest[a + 1] = 0;
	return (dest);
}
