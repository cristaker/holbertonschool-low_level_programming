#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: void
 * **/

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
