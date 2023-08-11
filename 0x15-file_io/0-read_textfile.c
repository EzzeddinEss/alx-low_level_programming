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
ssize_t _read;
ssize_t _write;
char buff[BUF_SIZE * 8];
fd = open(filename, O_RDONLY);
if (filename == 0)
return (0);
if (fd == -1)
return (0);
_read = read(fd, &buff[0], letters);
_write = write(STDOUT_FILENO, &buff[0], _read);
if (_write != _read)
return (0);
close(fd);
return (_write);
}
