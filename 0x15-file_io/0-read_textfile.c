#include "holberton.h"
/**
*read_textfile- reads and prints a text file
*@filename: pointer to file to be read
*@letters: length to print
*Return: 0 or return_value
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int length;
	int value;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	length = read(fd, buf, letters);
	if (length == -1)
		return (0);
	value = write(1, buf, length);
	if (value == -1)
		return (0);
	close (fd);
return (value);
}
