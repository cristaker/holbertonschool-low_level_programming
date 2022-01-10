#include "main.h"
/**
 *  *  * _memcpy - function copy pointer to poiner
 *   *   * @dest: pointer 1
 *    *    * @src: pointer 2
 *     *     * @n: size
 *      *      * Return: Always 0 (Succes)
 *       *       * **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
			unsigned int i = 0;

						while (i < n)
												{
																					dest[i] = src[i];
																															i++;
																																										}
										return (dest);
}
