#include "main.h"
/**
 * more_numbers - print number 1 - 14 ten times.
 *
 * Return: Always 0 (Succes)
 * **/

void more_numbers(void)
{
	int n;
	int j;

		for (n = 0; n < 10; n++)
		{
			for (j = 0; n < 15; n++)
			{
				if (j >= 10)
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			}
		}
				_putchar('\n');
}
