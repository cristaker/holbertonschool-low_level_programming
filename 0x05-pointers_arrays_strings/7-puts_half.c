#include "main.h"
/**
 * puts_half - to check
 * @str: integer
 * Return: 0
 * **/

void puts_half(char *str)
{
	int a = 0, b = 0;

	while (str[a])
	{
		a++;
		b++;
	}
	if (b % 2 == 0)
	{
		for (a = b / 2; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
		else
		{
		for (a = (b + 1) / 2; a < b; a++)
		{
			_putchar(str[a]);
		}
		}
	_putchar('\n');
}
