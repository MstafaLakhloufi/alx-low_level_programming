#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename:  file name to read
 * @letters: number of letters to  read
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, bytes;


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(fd);
	return (bytes);
}
