#include "main.h"
#include <stdio.h>
/**
 * create_array - entry point
 * @size: variable
 * @c: character value to array
 * Return: pointer
 * **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
		ptr =(char *)malloc(sizeof(char) * size);

		if (size == 0 || ptr == NULL)
		{
			ptr = 0;
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
		return (ptr);
}
