#include "holberton.h"
/**
* main - main file
* @argc: argument count
* @argv: commands
* Return: 0
**/
int main(int argc, char *argv[])
{
	int fd1, fd2, re;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((re = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, re) != re)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (re == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	close(fd1);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	close(fd2);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	return (0);
}
