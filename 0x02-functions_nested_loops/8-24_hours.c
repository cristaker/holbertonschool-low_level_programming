#include "main.h"
/**
 * jack_bauer - print the 24 hours
 *
 * Return: void
 * **/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a < 50; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 54; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a >= 50 && b >= 52)
						break;
					_putchar (a);
					_putchar (b);
					_putchar (58);
					_putchar (c);
					_putchar (d);
					_putchar ('\n');
				}
			}
		}
	}
}
