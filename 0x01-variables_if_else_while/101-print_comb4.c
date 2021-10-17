#include <stdio.h>
/**
 * main - Prints numbers betwen 000 and 999 and not repeat.
 * Return: Always 0 (Success)
 * **/
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (b > a && c > b)
				{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
				{
					putchar(44);
					putchar(32);
			}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
