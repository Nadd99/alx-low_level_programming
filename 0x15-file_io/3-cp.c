#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - entry
 * @argv: arguments vector
 * @argc: arguments count
 * Return: always 0 upon success
 */

int main(int argc, char **argv)
{
	char buff[BUFFER_SIZE];
	int fd_read, fd_write, i, n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read(fd_read, buff, BUFFER_SIZE)) > 0)
	{
		if (fd_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	i = close(fd_read);
	n = close(fd_write);
	if (i < 0 || n < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
