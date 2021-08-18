#include "holberton.h"
/**
* append_text_to_file - adds text to the end of a file
* @filename: name of file to append to
* @text_content: content to add to end of file
* Return: 1 for success else -1
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{}
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	return (1);
}
