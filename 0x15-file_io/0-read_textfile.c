#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and 0 fails or file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	t = read(file, bufer, letters);
	w = write(STDOUT_FILENO, bufer, t);

	free(bufer);
	close(file);
	return (w);
}
