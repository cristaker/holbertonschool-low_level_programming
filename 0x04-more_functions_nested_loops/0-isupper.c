#include "main.h"

/**
 * _isupper - prototype forr the function.
 * @c: check lowercase or uppercase
 * Return: 1 or 0 depending value of c.
 * **/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
