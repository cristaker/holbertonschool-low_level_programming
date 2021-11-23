#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: constant char pointer
 * @letters: size_t
 * Return: 0 if is NULL
 * **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, rd;
	int i;
	char *buf;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);
		if (i == -1)
			return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(i, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(i);
	free(buf);

	return (wr);
}
