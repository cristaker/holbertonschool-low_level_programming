#include <stdio.h>
/**
 * main - Prints numbers betwen 000 and 999 and not repeat.
 * Return: Always 0 (Success)
 * **/
int main(void)
{
	int i, e, o;

	for (i = 0; i < 8; i++)
{
	for (e = i + 1; e < 9; e++)
{
	for (o = e + 1; e < 10; o++)
				{
		putchar((i % 10) + '0');
		putchar((e % 10) + '0');
		putchar((o % 10) + '0');
		if (i == 7 && e == 8 && o == 9)
			continue;
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
