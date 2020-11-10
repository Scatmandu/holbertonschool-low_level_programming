#include "holberton.h"
/**
*append_text_to_file- appends text to end of a file
*@filename: file to append
*@text_content: content to append to file
*Return: 1 or -1
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	for (i = 0; text_content[i] != '\0'; i++)
	{}
	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
			w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
return (1);
}
