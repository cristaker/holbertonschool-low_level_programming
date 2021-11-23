#include "main.h"
/**
 * main - function
 * @argc: count of arguments.
 * @argv: char double pointer.
 * Return: Always 0 succes.
 * **/

int main(int argc, char **argv)
{
	int rd, wr, fd1, fd2, cl1, cl2;
	char buf[1024];

	if (argc != 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
				exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, buf, 1024);
	if (rd == -1 || fd1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		close(fd1);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	wr = write(fd2, buf, rd);
	if (fd2 == -1 || wr == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to%s\n", argv[2]);
		close(fd2);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(fd2, buf, 1024);
		wr = write(fd2, buf, rd);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", cl1);
		exit(100);
	}
	if (cl2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", cl2);
		exit(100);
	}
	return (0);
}
