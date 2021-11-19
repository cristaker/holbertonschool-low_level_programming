#include "main.h"
/**
 * flip_bits - function that returns the number of bits.
 * @n: number 1
 * @m: number 2
 * Return:  returns the number of bits between the two numbers
 * **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}
	return (numbits);
}
