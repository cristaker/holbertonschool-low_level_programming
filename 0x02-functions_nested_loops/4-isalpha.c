#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check character alphabetic
 * @c: parameter to check
 * Return: 1 if is true, 0 if is false.
 *
 * **/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	else
		return (0);

}


