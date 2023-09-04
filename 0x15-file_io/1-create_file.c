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
 * Return: incase of fail -1 otherwise 1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t _written = 0, len = _strlen(text_content);
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd == -1)
		return (-1);
	if (text_content != NULL && len)
	{
		_written = write(fd, text_content, len);
		if (_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	if (_written)
		chmod(filename, permissions);
	return (1);
}

