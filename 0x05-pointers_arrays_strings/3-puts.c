#include "main.h"
/**
 * _puts - string to print
 *@str: function to print
 * Return: 0
 * **/

void _puts(char *str)
{
	int c = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar (str[c]);
	}
	_putchar ('\n');
}
