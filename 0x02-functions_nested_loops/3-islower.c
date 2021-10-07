#include <ctype.h>
#include "main.h"
/**
 * _islower - Check c is lowercase.
 *
 * @c: parameter to be checked
 *
 * Return: 0 is false, 1 is true
 *
 * **/
int _islower(int c)
{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
	else
		{
			return (0);
		}
	_putchar ('\n');
}
