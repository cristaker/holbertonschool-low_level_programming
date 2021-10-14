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
		while (*(dest + a) != 0)
	{
		a++;
	}
	while (*(src + b) != 0)
	{
		*(dest + a + b) = *(src + b);
		if (b >= n)
			break;
	b++;
	}
	dest[a + b] = 0;
		return (dest);
}
