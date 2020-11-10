#include "holberton.h"
/**
*main- copies a file to another file
*@argc: number of arguments
*@argv: pointers to arguments
*Return: number of bytes copied
**/
int main(int argc, char *argv[])
{
	int fd_copy, fd_result, r, w, close_copy, close_result;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buf = malloc(1024);
	fd_copy = open(argv[1], O_RDONLY);
	r = read(fd_copy, buf, 1024);
	if (buf == NULL || fd_copy == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_result = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	w = write(fd_result, buf, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_copy = close(fd_copy);
	close_result = close(fd_result);
	if (close_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_copy);
		exit(100);
	}
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "error: Can't close fd %d\n", fd_result);
		exit(100);
	}
free(buf);
return (w);
}
