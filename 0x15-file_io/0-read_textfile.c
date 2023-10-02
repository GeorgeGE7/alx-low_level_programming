#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text on a file and prints (log) it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function gives an error or fails or the file name is === NULL - 0.
 *         O/w - the real number of bytes the method or function can read and print (log).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t oup, rdp, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	oup = open(filename, O_RDONLY);
	rdb = read(o, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rdb);

	if (oup == -1 || rdb == -1 || wrt == -1 || wrt != rdb)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(oup);

	return (wrt);
}
