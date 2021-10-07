#include "main.h"
/**
 * print_sign - determine greater or lower number
 * @n: character to check
 * Return: 1 if 0 is true, 0 if equal 0, -1 if lower 0.
 *
 * **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
			return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
			return (-1);
	}
	else
	{
		_putchar (48);
			return (0);
	}
		_putchar ('\n');
}
