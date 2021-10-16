#include "main.h"
/**
 * print_triangle - size of the triangle
 * @size: variable
 *
 * Return: 0
 * **/

void print_triangle(int size)
{
	int i, j;
	int limit = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			limit--;
			for (j = 0; j < size; j++)
			{
			if (j < limit)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
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
