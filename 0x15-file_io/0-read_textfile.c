#include "main.h"

/**
 * read_textfile - function
 * @filename: checks for file to read
 * @letters: numbers of letters
 * Return: prints the actual numbers letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	rd = read(file, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);

	close(file);

	return (wr);

}
