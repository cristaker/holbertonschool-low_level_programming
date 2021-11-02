#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function
 * @d: pointer
 * Return: Always 0
 * **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
