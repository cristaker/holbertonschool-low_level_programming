#include "main.h"
/**
 * puts2 - function to print
 * @str: char to integer
 * Return: 0
 * **/

void puts2(char *str)
{

	int a = 0, b = 0;

	while (str[a])
	{
		a++;
		b++;
	}

	for (a = 0; a <= b - 1; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
