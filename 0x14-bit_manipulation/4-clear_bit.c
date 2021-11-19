#include "main.h"
/**
 * clear_bit - function that sets the value of a bit
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return:  if it worked, or -1 if an error occurred
 * **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
