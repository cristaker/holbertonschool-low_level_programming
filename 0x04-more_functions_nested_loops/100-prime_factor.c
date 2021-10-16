#include "main.h"
#include <stdio.h>
/**
 * main - factor to print
 *
 * Return: Always 0 (Succes)
 * **/

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
