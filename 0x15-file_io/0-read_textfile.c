#include "main.h"
#include <stdio.h>

/**
 * read_textfile - a func that reads a txt file & prints it to standard output.
 * @filename: a pointer to the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t lett;
char buffer[64];
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
if (filename == 0 || letters == 0)
return (0);
lett = read(fd, &buffer[0], letters);
lett = write(STDOUT_FILENO, &buffer[0], lett);
close(fd);
return (lett);
}
