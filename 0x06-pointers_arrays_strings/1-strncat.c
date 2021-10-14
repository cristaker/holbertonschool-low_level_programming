#include "main.h"
/**
 * *_strncat - function
 *@n: number of bits
 *@dest: integer 1
 *@src: integer 2
 * Return: Always 0 (Succes)
 * **/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;
		while (dest[a])
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		b++;
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
		return (dest);
}
