#include "holberton.h"
/**
*create_file- creates a new file
*@filename: pointer to the name of a file to create
*@text_content: content to populate file with
*Return: 1 or -1
**/
int create_file(const char *filename, char *text_content)
{
	int i, fd, w;

	for (i = 0; text_content[i] != '\0'; i++)
	{}
	if (filename == NULL)
		return (-1);
	else
	{
		fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	/** else
	{
		fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	} **/
close(fd);
return (1);
}
