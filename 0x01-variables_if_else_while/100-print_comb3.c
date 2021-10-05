#include <stdio.h>
/**
 *  * main - Prints numbers betwen 00 and 99 and not repeat.
 *   *
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
	int i, e;

		for (i = 0; i < 9; i++)
	{
		for (e = i + 1; e < 10; e++)
		{
			putchar((i % 10) + '0');
			putchar((e % 10) + '0');
			if (i == 8 && e == 9)
	{
			continue;
	}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
