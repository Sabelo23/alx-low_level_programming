#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that read text file print to stdout.
 * @filename: It a text file being read
 * @letters: Is the number of letters to be read
 * Return: returns 0 if the file can't be opened or read, if filename is NULL
 * -return 0, if writes fails expeced amount of bytes, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
