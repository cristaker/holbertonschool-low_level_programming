#include "main.h"
/**
 * factorial - function
 * @n: variable
 * Return: 0
 * **/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}

	return (-1);
}
