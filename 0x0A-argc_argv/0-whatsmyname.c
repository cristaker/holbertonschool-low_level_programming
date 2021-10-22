#include "main.h"
#include <stdio.h>
/**
 * main - entrey point
 * @agrc: integer 1
 * @agrv: pointer to integer.
 * Return: 0
 * **/

int main(int agrc, char **agrv)
{
	(void)agrc;
	printf("%s\n", *agrv);
	return (0);
}
