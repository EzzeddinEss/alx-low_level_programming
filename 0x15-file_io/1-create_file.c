#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of string
 */

int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: the content of the file.
 *
 * Return: incase of fail -1 otherwise 1;
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t _write = 0, len = _strlen(text_content);
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (len != '\0')
_write = write(fd, text_content, len);
close(fd);
if (_write == len)
return (1);
else
return (-1);
}
