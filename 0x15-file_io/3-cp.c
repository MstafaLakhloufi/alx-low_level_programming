#include "main.h"

/**
 * err_file - checks if files can opened.
 * @file_from: The file from.
 * @file_to: The file to.
 * @argv: arguments
 * Return: void
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - mia program
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buf, 1024);
		if (r == -1)
			err_file(-1, 0, argv);
		w = write(file_to, buf, r);
		if (w == -1)
			err_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
