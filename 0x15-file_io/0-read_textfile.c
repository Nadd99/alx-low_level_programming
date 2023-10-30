#include "main.h"

/**
 * read_textfile - reads text and prints it to POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int num_read;
	int count;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	if (fd == -1)
	{
		return (0);
	}
	num_read = read(fd, buf, letters);
	if (num_read < 0)
	{
		free(buf);
		return (0);
	}
	buf[num_read] = '\0';
	close(fd);
	count = write(STDOUT_FILENO, buf, num_read);
	if (count < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (count);
}
