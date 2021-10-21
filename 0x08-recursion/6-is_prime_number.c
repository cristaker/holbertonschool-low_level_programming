#include "main.h"
/**
 * nprime - aditional variable
 * @a: aditional varible
 * @b: adtional variable 2
 * Return: 0
 * **/

int nprime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (b % a == 0)
	{
		return (0);
	}
	else
	{
	return (nprime(a + 1, b));
	}
}

/**
 * is_prime_number - function
 * @n: variable
 * Return: 0
 * **/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (nprime(2, n));
}
