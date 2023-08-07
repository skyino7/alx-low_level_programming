#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function
 * @filename: checks for file
 * @text_content: writes to file
 * Return: -1 fail and 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_APPEND | O_WRONLY);

	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	wr = write(file, text_content, len);

	if (wr == -1)
	{
		close(file);
		return (1);
	}

	close(file);

	return (1);
}
