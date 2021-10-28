#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function
 * @min: int 1
 * @max: int 2
 * Return: pointer
 * **/

int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		ptr[a] = min;

	return (ptr);
}
