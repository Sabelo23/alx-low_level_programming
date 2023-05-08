#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: A pointer that is pointing to a name of a file to be created./
 * @text_content: Is a pointer to a string to write a file.
 * Return: --1 if function unsuccessful, or -1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}
