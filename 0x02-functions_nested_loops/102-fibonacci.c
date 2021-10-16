#include "main.h"
#include <stdio.h>
/**
 * main - print number fibonacci
 *Return: Always 0 (Succes)
 * **/

int main(void)
{
	int n;
	unsigned long a = 0, b = 1, c;

	for (n = 0; n < 50; n++)
	{
		c = a + b;
		printf("%lu", c);

		a = b;
		b = c;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
