#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: integer
 * Return: int
 * **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

		va_list sumlist;
			va_start(sumlist, n);
				for (i = 0; i < n; i++)
				{
					sum += va_arg(sumlist, int);
				}
			va_end(sumlist);
				return (sum);
}
