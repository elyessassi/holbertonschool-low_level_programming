#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int fd, x, y, fd1, close1, close2;
	char buffer[1024];

	if (argc != 3)
		printf_and_exit(STDERR_FILENO, "Usage: cp file_from file_to\n", "", 97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		printf_and_exit(2, "Error: Can't read from file %s\n", argv[1], 98);
	x = read(fd, buffer, 1024);
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

/**
 * printf_and_exit - a function that prints a message and exits
 * @std: could be stdout or stderr
 * @message: the message to print
 * @filename: the name of the file
 * @exit_num: exit code
 */

void printf_and_exit(int std, char *message, char *filename, int exit_num)
{
	dprintf(std, message, filename);
	exit(exit_num);
}
