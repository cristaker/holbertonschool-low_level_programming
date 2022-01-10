#include "main.h"
/**
 *  *  * _memset - function to pointer
 *   *   *@s: pointer value
 *    *    *@b: char contain the value to change
 *     *     *@n: size to change
 *      *      * Return: Always 0 (Succes)
 *       *       * **/

char *_memset(char *s, char b, unsigned int n)
{
			while (n-- > 0)
								{
																s[n] = b;
																								}
						return (s);
}
