#include "main.h"

/**
 * create_file - creates a file
 * @filename: ...
 * @text_content: ...
 * Return: 1 if success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int n_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		n_write = write(fd, text_content, i);
		if (n_write != i)
			return (-1);
	}

	close(fd);
	return (1);
}
