#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read file text...
 * @filename: the name pointer
 * @letters: The number of letters
 * Return: If the function error name of file === null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t u, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	u = open(filename, O_RDONLY);
	re = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (u == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(u);

	return (wr);
}
