#include "main.h"
#include <stdio.h>

/**
 * create_file - func that creates a file
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	write(fd, text_content, strlen(text_content));
	return (1);
}
