#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: integer
 * @argv: pointer to integer
 * Return: 0
 * **/

int main(int argc, char **argv)
{
	int a = 0, b = 0;
	int mul = 0;
		if (argc > 3 || argc <= 2)
	{
		printf("Error\n");
			return (1);
	}
		else
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			mul = a * b;
			printf("%d\n", mul);
		}
		return (0);
}
