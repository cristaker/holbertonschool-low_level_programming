#include "main.h"
/**
 * print_square - function to print
 *@size: print variable
 * Return: Always 0 (Success)
 * **/

void print_square(int size)
{
	int a, j;

	if (size > 0)

	{
		for (a = 0; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
