#include "main.h"
/**
 * more_numbers - print number 1 - 14 ten times.
 *
 * Return: Always 0 (Succes)
 * **/

void more_numbers(void)
{
	int n, j;
		for (j = 0; j <= 9; j++)
	{
			for (n = 0; n < 15; n++)
	{
				if (n > 9)
					_putchar((n / 10) + 48);
						_putchar((n % 10) + 48);
}
		_putchar('\n');
}
}
