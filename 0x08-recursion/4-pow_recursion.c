#include "main.h"
/**
 * _pow_recursion - function
 * @x: variable 1
 * @y: variable 2
 * Return: 0
 * **/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x *  _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (1);
}
