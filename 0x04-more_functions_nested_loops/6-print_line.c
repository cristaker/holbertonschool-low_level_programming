#include "main.h"
/**
 * print_line - print straight line
 * @n: times to character repeat
 * Return: Always 0 (Succes)
 * **/

void print_line(int n)
{
	int i;
		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
}
