#include "main.h"
/**
 * print_diagonal - prototype to print
 * *@n: number of \ to check
 * * Return: Always 0 (Succes)
 * *  **/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
				_putchar(32);
				}
			}
					_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
