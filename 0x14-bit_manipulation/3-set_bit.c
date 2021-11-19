#include "main.h"
/**
 * set_bit - function that sets the value of a bit.
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred.
 * **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (-1);
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
