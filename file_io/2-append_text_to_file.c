#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		fd = open(filename, O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
