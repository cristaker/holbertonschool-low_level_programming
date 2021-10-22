#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: integer
 * @argv: pointer
 * Return: 0
 * **/

int main(int argc, char **argv)
{
	int a;
	int b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
		printf("%d\n", sum);
		return (sum);
}
