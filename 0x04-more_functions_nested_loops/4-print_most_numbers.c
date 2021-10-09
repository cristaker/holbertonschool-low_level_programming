#include "main.h"
/**
 * print_most_numbers - function to use
 *
 * Return: Always 0 (Succes)
 * **/

void print_most_numbers(void)
{
	int n;

		for (n = 48; n < 58; n++)
		{
			if (n != 50 && n != 52)
				_putchar(n);
		}
					_putchar('\n');
}
