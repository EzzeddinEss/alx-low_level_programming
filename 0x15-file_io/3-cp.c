#include "main.h"

/**
 * main - main function
 * @ac: The number of arguments
 * @av: An array of command-line argument strings
 * Return: 0 on success, or the appropriate error code
 */
int main(int ac, char *av[])
{
	int from_fd, to_fd;
	ssize_t _read, _written;
	char buff[BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, READERR, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, WRITEERR, av[2]), exit(99);
	while ((_read = read(from_fd, buff, BUF_SIZE)) > 0)
	{
		_written = write(to_fd, buff, _read);
		if (_written == -1)
			dprintf(STDERR_FILENO, WRITEERR, av[2]), exit(99);
	}
	if (_read == -1)
		dprintf(STDERR_FILENO, READERR, av[1]), exit(98);
	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, CLOSEERR, from_fd), exit(100);
	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, CLOSEERR, to_fd), exit(100);
	return (0);
}
