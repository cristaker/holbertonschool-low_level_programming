#include "main.h"
/**
 * binary_to_uint - function that converts a binary number
 * @b: char pointer
 * Return: the converted number
 * **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int len, base2;

	if (!b)
		return (0);

	a = 0;
		for (len = 0; b[len] != '\0'; len++)
			;
	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			a += base2;
		}
	}
	return (a);
}
