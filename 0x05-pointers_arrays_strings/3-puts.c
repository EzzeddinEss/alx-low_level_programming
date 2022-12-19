#include "main.h"
/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: the parametr
* Return: 0
*/

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
