#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]);

/**
 * error_exit - function
 * @message: message
*/

void error_exit(const char *message)
{
perror(message);
exit(1);
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
char buffer[1024];
ssize_t n_written, n_read;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

file_from = argv[1];
file_to = argv[2];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
return (98);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
return (99);
}

while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
n_written = write(fd_to, buffer, n_read);
if (n_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
return (99);
}
}

if (n_read == -1)
error_exit("read");


if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd\n");
return (100);
}

return (0);
}
