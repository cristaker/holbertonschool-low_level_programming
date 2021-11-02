#include "main.h"
/**
 * _strspn - function
 * @s: char pointer
 * @accept: char pointer 2
 * Return: number of bytes
 * **/

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int flag;
	int count;

	flag = 0;
	count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	return (count);
}
