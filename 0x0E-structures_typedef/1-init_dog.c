#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - main function
 *@d: char pointer
 *@name: char pointer
 *@age: float
 *@owner: char pointer
 *Return: Always 0 (succes)
 * **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
