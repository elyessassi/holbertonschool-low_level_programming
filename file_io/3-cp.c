#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * 
*/

int main(int argc, char *argv[])
{
	int fd;
	int x;
	int y;
	int fd1;
	int close1;
	int close2;
	char buffer[10000];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = read(fd, buffer, 10000);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close1 = close(fd);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	y = write(fd, buffer, x);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close2 = close(fd1);
	if (close2 == -1)
	{
		dprintf(3, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	return (0);



	
}