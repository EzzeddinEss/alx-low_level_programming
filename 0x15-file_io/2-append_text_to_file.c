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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the content to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t _wirtten = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len != 0)
	{
		_wirtten = write(fd, text_content, len);
	}
	close(fd);
	if (chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
	{
		return (-1);
	}

	return (_wirtten == len ? 1 : -1);
}

