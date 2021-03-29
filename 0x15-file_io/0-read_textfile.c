#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads text file and prints it to the POSIX stdoutput
 * @filename: pointer to the name of the file
 * @letters: number of letter it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t s, d;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	{
		if (!buf)
			return (0);
	}

	s = read(fd, buf, letters);
	if (s == -1)
	{
		free(buf);
		return (0);
	}

	buf[s] = '\0';

	close(fd);

	d = write(STDOUT_FILENO, buf, s);
	if (d == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (d);
}
