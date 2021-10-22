#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @agrc: integer
 * @agrv: pointer 
 * Return: 0
 * **/

int main(int agrc, char **agrv)
{
	int i;
	
	for (i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
