#include "main.h"
/**
 * reverse_array - array to reverse
 *
 * Return: Always 0 (Succes)
 * **/

void reverse_array(int *a, int n)
{
	int c2 = 0;

	while (c2 < n)
	{
		int i1 = a[c2];
		int i2 = a[n - 1];

		a[c2] = i2;
		a[n - 1] = i1;
		c2++;
		n--;
	}
}
