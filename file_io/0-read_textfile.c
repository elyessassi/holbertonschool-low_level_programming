#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    int n;
    char buf[10000];

    if (!filename)
    {
        return (0);
    }
    fd = open(filename,O_RDONLY);
    if (fd == -1)
    {
        return (0);
    }
    n = read(fd, buf, letters);
    n = write(STDOUT_FILENO, buf, n);
    close(fd);
    return (n);
}
