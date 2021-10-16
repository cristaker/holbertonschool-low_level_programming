#include "main.h"
#include <stdio.h>
/**
 * main - fibonacci number
 *
 * Return: 0
 * **/

int main(void)
{
	unsigned long a = 0, b = 1, csum;
	float totsum;

	while (1)
	{
		csum = a + b;
		if (csum > 4000000)
			break;

		if ((csum % 2) == 0)
			totsum += csum;

		a = b;
		b = csum;
	}
	printf("%.0f\n", totsum);
	return (0);
}
