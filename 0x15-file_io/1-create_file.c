#include "main.h"
/**
 * create_file -  function that creates a file
 * @filename: constant char pointer.
 * @text_content: char pointer
 * Return: 1 on success, -1 on failure.
 * **/

int create_file(const char *filename, char *text_content)
{
	int i;
	int nletters;
	int wr;

	if (!filename)
		return (0);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	wr = write(i, text_content, nletters);

	if (wr == -1)
		return (-1);
	close(i);
	return (1);
}
