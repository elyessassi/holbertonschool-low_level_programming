#include "main.h"
#include <stdio.h>

/**
 * create_file - func that creates a file
 * @filename: name of file to be created
 * @text_content: text to put in the file
 * Return: 1 on success -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		return (1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
	write(fd, text_content, strlen(text_content));
	return (1);
}
