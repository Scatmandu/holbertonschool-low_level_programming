#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
* read_textfile - reads a text file and prints to STDOUT
* @filename: file to open/read
* @letters: number of characters to read from file
* Return: text read or 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	re = read(fd, buf, letters);
	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, re);
	if (wr == -1)
		return (0);

	close(fd);
	free(buf);
	return (wr);
}
