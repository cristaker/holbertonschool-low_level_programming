#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: constant char pointer
 * @text_content: char pointer
 * Return: 1 on success and -1 on failure
 * **/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, wr, nletters;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		wr = write(i, text_content, nletters);

		if (wr == -1)
			return (-1);
	}
	close(i);
	return (1);

}
