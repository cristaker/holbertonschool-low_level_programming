#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet lowercase
 *
 * Return: Always 0 (Succes)
 * **/
void print_alphabet_x10(void)
{
	int i, e;
			for (i = 0; i < 10; i++)
	{
				for (e = 97; e < 123; e++)
	{
					_putchar (e);
	}
	}
		_putchar ('\n');
}
