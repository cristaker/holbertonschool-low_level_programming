#include <stdio.h>
/**
 * main - print number naturaal.
 *
 * Return: Always 0 (Succes)
 * **/
int main (void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
