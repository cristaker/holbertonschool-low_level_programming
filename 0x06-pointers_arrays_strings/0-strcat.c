#include "main.h"
/**
 * *_strcat - prototype to function
 *
 * Return: Always pointer (Succes)
 ***/
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		b++;
	}
	dest[a] = '\0';
	return (dest);

}
