#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: text file to read
 * @letters: numbre of lettters to read
 * Return: the actual number of letters it could read and print
 * 0 if functions are fails or file name is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	rd = read(fd, str, letters);
	wr = write(STDOUT_FILENO, str, rd);

	free(str);
	close(fd);
	return (wr);
}
