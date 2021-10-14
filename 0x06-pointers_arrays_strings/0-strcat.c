#include "main.h"
/**
 * *_strcat - prototype to function
 *@dest: integer 1
 *@src: integer 2
 * Return: Always pointer (Succes)
 ***/
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);

}
