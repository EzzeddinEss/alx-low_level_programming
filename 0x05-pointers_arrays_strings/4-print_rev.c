#include "main.h"
/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @n: the parametr
* Return: void
*/

void print_rev(char *n)
{

	int x = 0;

	while (x > 0)
	{
		if (n[x] == '\0')
			break;
		x++;
	}
	for (x--; x > 0; x--)
	{
		_putchar(n[x]);
	}
	_putchar('\n');

}
