#include "main.h"
/**
 * _sqrt - aditional function
 * @a: aditional variable
 * @b: adtional variable 2
 * Return: 0
 * **/

int _sqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (_sqrt((a + 1), b));
}

/**
 * _sqrt_recursion - function
 * @n: variable
 * Return: 0
 * **/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(1, n));
}
