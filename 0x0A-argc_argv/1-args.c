#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @agrc: integer
 * @agrv: pointer to integer
 * Return: 0
 * **/

int main(int agrc, char **agrv)
{
	(void)**agrv;
	printf("%d\n", agrc);
	return (0);
}
