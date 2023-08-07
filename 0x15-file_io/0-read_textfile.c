#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a func that reads a txt file & prints it to standard output.
 * @filename: a pointer to the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t w;
ssize_t r;
char buffer[BUF_SIZE * 8];
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
if (filename == NULL || !letters)
return (0);
r = read(fd, &buffer[0], letters);
w = write(STDOUT_FILENO, &buffer[0], r);
close(fd);
return (w);
}
