#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - function
 * @code: error code
 * @format: format of error
 * @arg: argument
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error(97, "Usage: %s file_from file_to\n", argv[0]);

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
		print_error(99, "Error: Can't to write to %s\n", file_to);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error(99, "Error: Can't write to %s\n", file_to);
	}

	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		print_error(2, "Error: Can't close fd %d\n", 0);

	if (close(fd_to) == -1)
	{
		print_error(2, "Error: Can't close fd %d\n", 0);
		exit(100);
	}
	return (0);
}
