#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function
 * @filename: checks for filename
 * @text_content: writes to file
 * Return: -1 when fails to write and 1 when success
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
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
		return (-1);
	}

	close(file);

	return (1);
}
