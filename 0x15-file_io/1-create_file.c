#include "holberton.h"
#include <stdlib.h>

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t d, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		d = write(fd, text_content, i);
		if (d != i)
			return (-1);
	}
	close(fd);
	return (1);
}
