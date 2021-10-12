#include "main.h"

/**
 * swap_int - to declarate
 * @a: integer 1
 * @b: integer 2
 * Return: Always 0 (Succes)
 * **/
void swap_int(int *a, int *b)
{
	int c = *a;
		*a = *b;
		*b = c;
}
