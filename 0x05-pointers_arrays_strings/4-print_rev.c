#include "main.h"
/**
 * print_rev - function
 * @s: integer
 * Return: 0
 * **/

void print_rev(char *s)
{
	int c = 0;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (c--; c >= 0; c--)
	{
		_putchar (s[c]);
	}
	_putchar ('\n');
}
